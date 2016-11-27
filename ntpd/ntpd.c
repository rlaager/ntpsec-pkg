/*
 * ntpd.c - main program for the fixed point NTP daemon
 */

#include <config.h>

#include "ntp_machine.h"
#include "ntpd.h"
#include "ntp_io.h"
#include "ntp_stdlib.h"
#include "ntp_random.h"

#include "ntp_config.h"
#include "ntp_syslog.h"
#include "ntp_assert.h"
#include "ntp_intercept.h"
#include "isc/error.h"
#include "isc/formatcheck.h"
#include "iosignal.h"

#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdbool.h>
#include <signal.h>
#ifdef HAVE_SYS_IOCTL_H
# include <sys/ioctl.h>
#endif /* HAVE_SYS_IOCTL_H */
#include <sched.h>
#include <sys/mman.h>

#include <termios.h>

#include "recvbuff.h"

extern bool sandbox(const bool droproot,
		    const char *user, const char *group,
		    const char *chrootdir,
		    bool want_dynamic_interface_tracking);

#if defined(SIGDIE1)
static volatile bool signalled	= false;
static volatile int signo	= 0;
/* In an ideal world, 'finish_safe()' would declared as noreturn... */
static	void		finish_safe	(int);
#endif

#ifdef SIGDANGER
# include <ulimit.h>
#endif /* SIGDANGER */

#if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
# include <dns_sd.h>
DNSServiceRef mdns;
#endif

#include <sodium.h>

static bool need_priority = false;
static bool config_priority_override = false;
static int config_priority;

bool listen_to_virtual_ips = true;

static char *logfilename;
static bool opt_ipv4, opt_ipv6;
static const char *explicit_config;
static bool explicit_interface;
static bool nofork = false;		/* Fork by default */
static bool dumpopts;
static long wait_sync = -1;
static const char *driftfile, *pidfile;

#if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
/*
 * mDNS registration flag. If set, we attempt to register with the
 * mDNS system, but only after we have synched the first time. If the
 * attempt fails, then try again once per minute for up to 5
 * times. After all, we may be starting before mDNS.
 */
bool mdnsreg = false;
int mdnstries = 5;
#endif  /* ENABLE_MDNS_REGISTRATION */

bool droproot = false;
char *user;		/* User to switch to */
char *group;		/* group to switch to */
const char *chrootdir;	/* directory to chroot to */

#ifdef HAVE_WORKING_FORK
int	waitsync_fd_to_close = -1;	/* -w/--wait-sync */
#endif

char const *progname;

#ifdef HAVE_NETINFO_NI_H
extern bool	check_netinfo;
#endif

bool was_alarmed;

#if defined(HAVE_WORKING_FORK)
static int	wait_child_sync_if	(int, long);
#endif

#if defined(SIGHUP)
static	void	catchHUP	(int);
volatile int sawHUP = false;
#endif

#if !defined(SYS_WINNT)
# ifdef	DEBUG
static	void	moredebug	(int);
static	void	lessdebug	(int);
# else	/* !DEBUG follows */
static	void	no_debug	(int);
# endif	/* !DEBUG */
#endif	/* !SYS_WINNT */

int	saved_argc;
char **	saved_argv;

int		ntpdmain		(int, char **);
static void	mainloop		(void);
static void	set_process_priority	(void);
static void	assertion_failed	(const char *, int,
					 isc_assertiontype_t,
					 const char *)
			__attribute__	((__noreturn__));
static void	library_fatal_error	(const char *, int, 
					 const char *, va_list)
					ISC_FORMAT_PRINTF(3, 0);
static void	library_unexpected_error(const char *, int,
					 const char *, va_list)
					ISC_FORMAT_PRINTF(3, 0);

#define ALL_OPTIONS "46aAbc:dD:f:gGhi:I:k:l:LmMnNp:Pqr:Rs:t:u:UVw:xyYzZ"
static const struct option longoptions[] = {
    { "ipv4",		    0, 0, '4' },
    { "ipv6",		    0, 0, '6' },
    { "authreq",	    0, 0, 'a' },
    { "noauthreq",	    0, 0, 'A' },
    { "bcastsync",	    0, 0, 'b' },
    { "configfile",	    1, 0, 'c' },
    { "debug",		    0, 0, 'd' },
    { "set-debug-level",    1, 0, 'D' },
    { "ipv4",		    0, 0, '4' },
    { "driftile",	    1, 0, 'f' },
    { "panicgate",	    0, 0, 'g' },
    { "help",	            0, 0, 'h' },
    { "jaildir",	    1, 0, 'i' },
    { "interface",	    1, 0, 'I' },
    { "keyfile",	    1, 0, 'k' },
    { "logfile",	    1, 0, 'l' },
    { "novirtualips",	    0, 0, 'L' },
    { "nofork",		    0, 0, 'n' },
    { "nice",		    0, 0, 'N' },
    { "quit",		    0, 0, 'q' },
    { "propagationdelay",   1, 0, 'r' },
    { "dumpopts",	    0, 0, 'R' },
    { "statsdir",	    1, 0, 's' },
    { "trustedkey",	    1, 0, 't' },
    { "user",		    1, 0, 'u' },
    { "updateinterval",	    1, 0, 'U' },
    { "capture",	    1, 0, 'y' },
    { "replay",		    1, 0, 'Y' },
    { "var",		    1, 0, 'z' },
    { "dvar",		    1, 0, 'Z' },
    { "slew",		    0, 0, 'x' },
    { "version",	    0, 0, 'V' },
    { NULL,                 0, 0, '\0'}, 
};

static void ntpd_usage(void)
{
#define P(x)	fputs(x, stderr)
    P("USAGE:  ntpd [ -<flag> [<val>] | --<name>[{=| }<val>] ]...\n");
    P("  Flg Arg Option-Name    Description\n");
    P("   -4 no  ipv4           Force IPv4 DNS name resolution\n");
    P("				- prohibits the option 'ipv6'\n");
    P("   -6 no  ipv6           Force IPv6 DNS name resolution\n");
    P("				- prohibits the option 'ipv4'\n");
    P("   -a no  authreq        Require crypto authentication\n");
    P("				- prohibits the option 'authnoreq'\n");
    P("   -A no  authnoreq      Do not require crypto authentication\n");
    P("				- prohibits the option 'authreq'\n");
    P("   -b no  bcastsync      Allow us to sync to broadcast servers\n");
    P("   -c Str configfile     configuration file name\n");
    P("   -d no  debug-level    Increase output debug message level\n");
    P("				- may appear multiple times\n");
    P("   -D Str set-debug-level Set the output debug message level\n");
    P("				- may appear multiple times\n");
    P("   -f Str driftfile      frequency drift file name\n");
    P("   -g no  panicgate      Allow the first adjustment to be Big\n");
    P("				- may appear multiple times\n");
    P("   -h no  --help         Display usage summary of options and exit.\n"); 
    P("   -i Str jaildir        Jail directory\n");
    P("   -I Str interface      Listen on an interface name or address\n");
    P("				- may appear multiple times\n");
    P("   -k Str keyfile        path to symmetric keys\n");
    P("   -l Str logfile        path to the log file\n");
    P("   -L no  novirtualips   Do not listen to virtual interfaces\n");
    P("   -n no  nofork         Do not fork\n");
    P("   -N no  nice           Run at high priority\n");
    P("   -p Str pidfile        path to the PID file\n");
    P("   -P Num priority       Process priority\n");
    P("   -q no  quit           Set the time and quit\n");
    P("   -r Str propagationdelay Broadcast/propagation delay\n");
    P("   -s Str statsdir       Statistics file location\n");
    P("   -t Str trustedkey     Trusted key number\n");
    P("				- may appear multiple times\n");
    P("   -u Str user           Run as userid (or userid:groupid)\n");
    P("   -U Num uinterval      interval in secs between scans for new or dropped interfaces\n");
    P("      Str var            make ARG an ntp variable (RW)\n");
    P("				- may appear multiple times\n");
    P("      Str dvar           make ARG an ntp variable (RW|DEF)\n");
    P("				- may appear multiple times\n");
    P("   -x no  slew           Slew up to 600 seconds\n");
    P("   -V no  version        Output version information and exit\n");
    P("   -h no  help           Display extended usage information and exit\n");
#ifdef REFCLOCK
    P("This version was compiled with the following clock drivers:\n");
    int ct = 0;
    for (int dtype = 1; dtype < (int)num_refclock_conf; dtype++)
	if (refclock_conf[dtype]->basename != NULL)
	{
	    fprintf(stderr, "%12s", refclock_conf[dtype]->basename);
	    if (((++ct % 5) == 0))
		fputc('\n', stderr);
	}
    if (ct % 5)
	fputc('\n', stderr);
#endif /* REFCLOCK */
#undef P
}

static void
parse_cmdline_opts(
	int argc,
	char **argv
	)
{
	static bool	parsed = false;
	int sawV = 0;

	if (parsed)
	    return;

	int op;

	while ((op = ntp_getopt_long(argc, argv,
				     ALL_OPTIONS, longoptions, NULL)) != -1) {

	    switch (op) {
	    case '4':
		opt_ipv4 = true;
		break;
	    case '6':
		opt_ipv6 = true;
		break;
	    case 'a':
		/* defer */
		break;
	    case 'A':
		/* defer */
		break;
	    case 'b':
		break;
	    case 'c':
		explicit_config = ntp_optarg;
		break;
	    case 'd':
#ifdef DEBUG
		++debug;
#endif
		nofork = true;
		break;
	    case 'D':
#ifdef DEBUG
		debug = atoi(ntp_optarg);
#endif
		break;
	    case 'f':
		driftfile = ntp_optarg;
		break;
	    case 'g':
		allow_panic = true;
		break;
	    case 'G':
		force_step_once = true;
		break;
	    case 'h':
		ntpd_usage();
		exit(0);
	    case 'i':
#ifdef ENABLE_DROPROOT
		droproot = true;
		chrootdir = ntp_optarg;
#endif
		break;
	    case 'I':
		explicit_interface = true;
		/* processing deferred */
		break;
	    case 'k':
		/* defer */
		break;
	    case 'l':
		logfilename = ntp_optarg;
		break;
	    case 'L':
		listen_to_virtual_ips = false;
		break;
	    case 'm':
#if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
		mdnsreg = true;
#endif  /* ENABLE_MDNS_REGISTRATION */
		break;
	    case 'M':
		/* defer */
		break;
	    case 'n':
		nofork = true;
		break;
	    case 'N':
		need_priority = true;
		break;
	    case 'p':
		pidfile = ntp_optarg;
		break;
	    case 'P':
		config_priority = atoi(ntp_optarg);
		config_priority_override = true;
		need_priority = true;
		break;
	    case 'q':
		mode_ntpdate = true;
		nofork = true; 
		break;
	    case 'r':
		{
		    double tmp;
		    if (sscanf(ntp_optarg, "%lf", &tmp) != 1) {
			msyslog(LOG_ERR,
				"command line broadcast delay value %s undecodable",
				ntp_optarg);
			exit(0);
		    }
		}
	        break;
	    case 'R':	/* undocumented -- dump CLI options for testing */
		dumpopts = true;
		nofork = true;
		break;
	    case 's':
		strlcpy(statsdir, ntp_optarg, sizeof(statsdir));
		break;
	    case 't':
		/* defer */
		break;
	    case 'u':
#ifdef ENABLE_DROPROOT
		droproot = true;
		/* coverity[overwrite_var] Leak is real but harmless */
		user = estrdup(ntp_optarg);
		/* coverity[overwrite_var] Leak is real but harmless */
		group = strrchr(user, ':');
		if (group != NULL) {
			size_t	len;

			*group++ = '\0'; /* get rid of the ':' */
			len = group - user;
			group = estrdup(group);
			user = erealloc(user, len);
		}
#endif
		break;
	    case 'U':
		{
		    long val = atol(argv[ntp_optind]);

		    if (val >= 0)
			    interface_interval = val;
		    else {
			    fprintf(stderr,
				    "command line interface update interval %ld must not be negative\n",
				    val);
			    msyslog(LOG_ERR,
				    "command line interface update interval %ld must not be negative",
				    val);
			    exit(0);
		    }
		}
		break;
	    case 'V':
		sawV++;
		switch (sawV) {
		  case 1:
			printf("ntpd %s\n", Version);
			break;
		  case 2:
			printf("ntpd %s\n", VVersion);
			break;
		  default:
			printf("ntpd no-more\n");
			break;
		}
		break;
	    case 'w':
		wait_sync = strtod(ntp_optarg, NULL);
		break;
	    case 'x':
		/* defer */
		break;
	    case 'y':
		nofork = true;
		/* further processed by interception code */
		break;
	    case 'Y':
		nofork = true;
		/* further processed by interception code */
		break;
	    case 'z':
		/* defer */
		break;
	    case 'Z':
		/* defer */
		break;
	    default:
		fputs("Unknown command line switch or missing argument.\n", stderr);
		ntpd_usage();
		exit(1);
	    } /*switch*/
	}

	/*
	 * Two port-specific options for Windows (USEPCC and PCCFREQ)
	 * have been omitted until the Windows port can be beaten back
	 * into shape.
	 */

	/*
	 * Sanity checks and derived options
	 */

	/* save list of servers from cmd line for config_peers() use */
	if (ntp_optind < argc) {
		cmdline_server_count = argc - ntp_optind;
		cmdline_servers = argv + ntp_optind;
	}

	if (sawV > 0)
		exit(0);
}

#ifdef NO_MAIN_ALLOWED
CALL(ntpd,"ntpd",ntpdmain);
#else	/* !NO_MAIN_ALLOWED follows */
#ifndef SYS_WINNT
int
main(
	int argc,
	char *argv[]
	)
{
	return ntpdmain(argc, argv);
}
#endif /* !SYS_WINNT */
#endif /* !NO_MAIN_ALLOWED */

#ifdef SIGDANGER
/*
 * Signal handler for SIGDANGER. (AIX)
 */
static void
catch_danger(int signo)
{
	msyslog(LOG_INFO, "ntpd: setpgid(): %m");
	/* Make the system believe we'll free something, but don't do it! */
	return;
}
#endif /* SIGDANGER */

/*
 * Set the process priority
 */
static void
set_process_priority(void)
{
# ifdef DEBUG
	if (debug > 1)
		msyslog(LOG_DEBUG, "set_process_priority: %s",
			((!need_priority)
			 ? "Leave priority alone"
			 : "Attempt to set priority"
				));
# endif /* DEBUG */
#ifdef HAVE_SCHED_SETSCHEDULER
	if (need_priority) {
		int pmax, pmin;
		struct sched_param sched;

		pmax = sched_get_priority_max(SCHED_FIFO);
		sched.sched_priority = pmax;
		if ( config_priority_override ) {
			pmin = sched_get_priority_min(SCHED_FIFO);
			if ( config_priority > pmax )
				sched.sched_priority = pmax;
			else if ( config_priority < pmin )
				sched.sched_priority = pmin;
			else
				sched.sched_priority = config_priority;
		}
		if ( sched_setscheduler(0, SCHED_FIFO, &sched) == -1 )
			msyslog(LOG_ERR, "sched_setscheduler(): %m");
		else
			need_priority = false;
	}
#endif
	if (need_priority)
		msyslog(LOG_ERR, "set_process_priority: No way found to improve our priority");
}

/*
 * Main program.  Initialize us, disconnect us from the tty if necessary,
 * and loop waiting for I/O and/or timer expiries.
 */
int
ntpdmain(
	int argc,
	char *argv[]
	)
{
	mode_t		uv;
	uid_t		uid;
# if defined(HAVE_WORKING_FORK)
	int		pipe_fds[2];
	int		rc;
	int		exit_code;
#  ifdef SIGDANGER
	struct sigaction sa;
#  endif
# endif	/* HAVE_WORKING_FORK*/
	int op;

	uv = umask(0);
	if (uv)
		umask(uv);
	else
		umask(022);
	saved_argc = argc;
	saved_argv = argv;
	progname = argv[0];
	intercept_argparse(&argc, &argv);
	parse_cmdline_opts(argc, argv);
# ifdef DEBUG
	setvbuf(stdout, NULL, _IOLBF, 0);
# endif

	init_logging(progname, NLOG_SYNCMASK, true);
	/* honor -l/--logfile option to log to a file */
	if (logfilename != NULL) {
		syslogit = false;
		termlogit = false;
		change_logfile(logfilename, false);
	} else {
		if (nofork)
		    termlogit = (intercept_get_mode() == none || debug > 0);
		if (dumpopts)
			syslogit = false;
	}

	if (!dumpopts)
	{
		int i;
		char buf[1024];	/* Secret knowledge of msyslog buf length */
		char *cp = buf;

		msyslog(LOG_NOTICE, "ntpd %s: Starting", Version);

		/* Note that every arg has an initial space character */
		snprintf(cp, sizeof(buf), "Command line:");
		cp += strlen(cp);

		for (i = 0; i < saved_argc ; ++i) {
			snprintf(cp, sizeof(buf) - (cp - buf),
				" %s", saved_argv[i]);
			cp += strlen(cp);
		}
		msyslog(LOG_INFO, "%s", buf);
	}

	/*
	 * Install trap handlers to log errors and assertion failures.
	 * Default handlers print to stderr which doesn't work if detached.
	 */
	isc_assertion_setcallback(assertion_failed);
	isc_error_setfatal(library_fatal_error);
	isc_error_setunexpected(library_unexpected_error);

	uid = getuid();
	if (uid && intercept_get_mode() != replay && !dumpopts) {
		termlogit = true;
		msyslog(LOG_ERR,
			"must be run as root, not uid %ld", (long)uid);
		exit(1);
	}
	switch (intercept_get_mode())
	{
	case none:
	    break;
	case replay:
	    msyslog(LOG_NOTICE, "setting replay mode.");
	    break;
	case capture:
	    msyslog(LOG_NOTICE, "setting capture mode.");
	    break;
	}

# ifdef HAVE_WORKING_FORK
	/* make sure the FDs are initialised */
	pipe_fds[0] = -1;
	pipe_fds[1] = -1;

	if (wait_sync <= 0)
	    wait_sync = 0;
	else {
	    /* -w requires a fork() even with debug > 0 */
	    nofork = false;
	    if (pipe(pipe_fds)) {
		exit_code = (errno) ? errno : -1;
		msyslog(LOG_ERR,
			"Pipe creation failed for --wait-sync: %m");
		exit(exit_code);
	    }
	    waitsync_fd_to_close = pipe_fds[1];
	}
# endif	/* HAVE_WORKING_FORK */

	init_lib();
# ifdef SYS_WINNT
	/*
	 * Start interpolation thread, must occur before first
	 * get_systime()
	 */
	init_winnt_time();
# endif
	/*
	 * Detach us from the terminal.  May need an #ifndef GIZMO.
	 */
	if (!nofork) {

# ifdef HAVE_WORKING_FORK
		rc = fork();
		if (-1 == rc) {
			exit_code = (errno) ? errno : -1;
			msyslog(LOG_ERR, "fork: %m");
			exit(exit_code);
		}
		if (rc > 0) {	
			/* parent */
			exit_code = wait_child_sync_if(pipe_fds[0],
						       wait_sync);
			exit(exit_code);
		}
		
		/*
		 * child/daemon 
		 * close all open files excepting waitsync_fd_to_close.
		 * msyslog() unreliable until after init_logging().
		 */
		closelog();
		if (syslog_file != NULL) {
			fclose(syslog_file);
			syslog_file = NULL;
			syslogit = true;
		}
		close_all_except(waitsync_fd_to_close);
		INSIST(0 == open("/dev/null", 0) && 1 == dup2(0, 1) \
			&& 2 == dup2(0, 2));

		init_logging(progname, 0, true);
		/* we lost our logfile (if any) daemonizing */
		setup_logfile(logfilename);

		if (setsid() == (pid_t)-1)
			msyslog(LOG_ERR, "setsid(): %m");
#  ifdef SIGDANGER
		/* Don't get killed by low-on-memory signal. */
		sa.sa_handler = catch_danger;
		sigemptyset(&sa.sa_mask);
		sa.sa_flags = SA_RESTART;
		sigaction(SIGDANGER, &sa, NULL);
#  endif	/* SIGDANGER */
# endif		/* HAVE_WORKING_FORK */
	}

        /*
	 * Initialize libsodium and its RNG
	 */
	sodium_init();

	/*
	 * Set up signals we pay attention to locally.
	 */
# ifdef SIGDIE1
	signal_no_reset(SIGDIE1, finish);
	signal_no_reset(SIGDIE2, finish);
	signal_no_reset(SIGDIE3, finish);
# endif
# ifdef SIGHUP
	signal_no_reset(SIGHUP, catchHUP);
# endif
# ifdef SIGBUS
	signal_no_reset(SIGBUS, finish);
# endif

# ifdef DEBUG
	(void) signal_no_reset(MOREDEBUGSIG, moredebug);
	(void) signal_no_reset(LESSDEBUGSIG, lessdebug);
# else
	(void) signal_no_reset(MOREDEBUGSIG, no_debug);
	(void) signal_no_reset(LESSDEBUGSIG, no_debug);
# endif	/* DEBUG */

	/*
	 * Set up signals we should never pay attention to.
	 */
# ifdef SIGPIPE
	signal_no_reset(SIGPIPE, SIG_IGN);
# endif

	/*
	 * Call the init_ routines to initialize the data structures.
	 *
	 * Exactly what command-line options are we expecting here?
	 */
	INIT_SSL();
	init_auth();
	init_util();
	init_restrict();
	init_mon();
	init_control();
	init_peer();
# ifdef REFCLOCK
	init_refclock();
# endif
	set_process_priority();
	init_proto(!dumpopts);		/* Call at high priority */
	init_io();
	init_loopfilter();
	mon_start(MON_ON);	/* monitor on by default now	  */
				/* turn off in config if unwanted */

	/*
	 * Some option settings have to be deferred until after
	 * the library initialization sequence.
	 */
	ntp_optind = 1;
	while ((op = ntp_getopt_long(argc, argv, ALL_OPTIONS,
				     longoptions, NULL)) != -1) {
	    switch (op) {
	    case 'a':
		proto_config(PROTO_AUTHENTICATE, 1, 0.0, NULL);
		break;
	    case 'A':
		proto_config(PROTO_AUTHENTICATE, 0, 0.0, NULL);
		break;
	    case 'b':
		proto_config(PROTO_BROADCLIENT, 1, 0.0, NULL);
		break;
	    case 'f':
		stats_config(STATS_FREQ_FILE, driftfile);
		break;
	    case 'I':
		if (intercept_get_mode() != replay)
	        {
		    sockaddr_u	addr;
		    add_nic_rule(
			is_ip_address(ntp_optarg, AF_UNSPEC, &addr)
			? MATCH_IFADDR
			: MATCH_IFNAME,
			ntp_optarg, -1, ACTION_LISTEN);
	        }
		break;
	    case 'k':
		intercept_getauthkeys(ntp_optarg);
		break;
	    case 'M':
# ifdef SYS_WINNT
		set_mm_timer(MM_TIMER_HIRES);
# endif
		break;
	    case 'p':
		stats_config(STATS_PID_FILE, pidfile);
		break;
	    case 'r':
		proto_config(PROTO_BROADDELAY, 0, atof(ntp_optarg), NULL);
		break;
	    case 's':
		stats_config(STATS_STATSDIR, statsdir);
		break;
	    case 't':
		{
		    u_long tkey = (int)atol(ntp_optarg);
		    if (tkey == 0 || tkey > NTP_MAXKEY) {
			msyslog(LOG_ERR,
				"command line trusted key %s is invalid",
				ntp_optarg);
			exit(0);
		    } else {
			authtrust(tkey, 1);
		    }
	        }
		break;
	    case 'x':
		loop_config(LOOP_MAX, 600);
		break;
	    case 'z':
		set_sys_var(ntp_optarg, strlen(ntp_optarg) + 1, RW);
		break;
	    case 'Z':
		set_sys_var(ntp_optarg, strlen(ntp_optarg) + 1, (u_short) (RW | DEF));
		break;
	    }
	}

	/*
	 * ntpd's working set is never going to be large relative to memory
	 * availability on modern machines. Do what chrony does and indulge it;
	 * we get some latency improvement that way.
	 * Need to do this before droproot.
	 */
	{
	    struct rlimit rlim;
	    rlim.rlim_max = rlim.rlim_cur = RLIM_INFINITY;
	    if (setrlimit(RLIMIT_MEMLOCK, &rlim) < 0)
		msyslog(LOG_WARNING, "setrlimit() failed: not locking into RAM");
	    else if (mlockall(MCL_CURRENT|MCL_FUTURE) < 0)
		msyslog(LOG_WARNING, "mlockall() failed: not locking into RAM");
	    else
		msyslog(LOG_INFO, "successfully locked into RAM");
	}

#ifdef ENABLE_EARLY_DROPROOT
	/* drop root privileges */
	/* This doesn't work on NetBSD or with SHM */
	if (sandbox(droproot, user, group, chrootdir, interface_interval!=0) && interface_interval) {
		interface_interval = 0;
		msyslog(LOG_INFO, "running as non-root disables dynamic interface tracking");
	}
#endif

     	/* use this to test if option setting gives expected results */
	if (dumpopts) {
	    proto_dump(stdout);
	    if (explicit_config)
		fprintf(stdout, "conffile \"%s\";\n", explicit_config);
	    fprintf(stdout, "#debug = %d\n", debug);
	    if (driftfile)
		fprintf(stdout, "driftfile \"%s\";\n", driftfile);
	    fprintf(stdout, "#allow_panic = %s\n",
		    allow_panic ? "true" : "false");
	    fprintf(stdout, "#force_step_once = %s\n",
		    force_step_once ? "true" : "false");
#ifdef ENABLE_DROPROOT
	    if (chrootdir)
		fprintf(stdout, "#chrootdir = \"%s\";\n", chrootdir);
	    if (user)
		fprintf(stdout, "#user = %s\n", user);
	    if (group)
		fprintf(stdout, "#group = %s\n", group);
#endif
	    /* FIXME: dump interfaces */
	    /* FIXME: dump authkeys */
	    if (logfilename)
		fprintf(stdout, "logfile \"%s\";\n", logfilename);
	    fprintf(stdout, "#listen_to_virtual_ips = %s\n",
		    listen_to_virtual_ips ? "true" : "false");
#if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
	    fprintf(stdout, "#mdnsreg = %s\n",
		    mdnsreg ? "true" : "false");
#endif  /* ENABLE_MDNS_REGISTRATION */
# ifdef SYS_WINNT
	    /* FIXME: dump the timer state */
# endif
	    if (pidfile)
		fprintf(stdout, "pidfile \"%s\";\n", pidfile);
	    /* FIXME: dump priority */
	    fprintf(stdout, "#mode_ntpdate = %s\n",
		    mode_ntpdate ? "true" : "false");
	    if (statsdir[0])
		fprintf(stdout, "statsdir \"%s\";\n", statsdir);
	    fprintf(stdout, "#interface_interval = %d\n", interface_interval);
	    /* FIXME: dump variable settings */
	    exit(0);
	}
			
	if (ipv4_works && ipv6_works) {
		if (opt_ipv4)
			ipv6_works = false;
		else if (opt_ipv6)
			ipv4_works = false;
	} else if (!ipv4_works && !ipv6_works) {
		msyslog(LOG_ERR, "Neither IPv4 nor IPv6 networking detected, fatal.");
		exit(1);
	} else if (opt_ipv4 && !ipv4_works)
		msyslog(LOG_WARNING, "-4/--ipv4 ignored, IPv4 networking not found.");
	else if (opt_ipv6 && !ipv6_works)
		msyslog(LOG_WARNING, "-6/--ipv6 ignored, IPv6 networking not found.");

	/*
	 * Get the configuration.
	 */
	have_interface_option = (!listen_to_virtual_ips || explicit_interface);
	intercept_getconfig(explicit_config);

	loop_config(LOOP_DRIFTINIT, 0);
	report_event(EVNT_SYSRESTART, NULL, NULL);

#ifndef ENABLE_EARLY_DROPROOT
	/* drop root privileges */
	if (sandbox(droproot, user, group, chrootdir, interface_interval!=0) && interface_interval) {
		interface_interval = 0;
		msyslog(LOG_INFO, "running as non-root disables dynamic interface tracking");
	}
#endif

	if (intercept_get_mode() == replay)
	    intercept_replay();
	else
	    mainloop();
	return 1;
}

/*
 * Process incoming packets until exit or interrupted.
 */
static void mainloop(void)
{
	struct recvbuf *rbuf;

	init_timer();

# ifdef HAVE_IO_COMPLETION_PORT
	for (;;) {
#if defined(SIGDIE1)
		if (signalled)
			finish_safe(signo);
#endif
		GetReceivedBuffers();
# else /* normal I/O */

	BLOCK_IO_AND_ALARM();
	was_alarmed = false;

	for (;;) {
#if defined(SIGDIE1)
		if (signalled)
			finish_safe(signo);
#endif
		if (alarm_flag) {	/* alarmed? */
			was_alarmed = true;
			alarm_flag = false;
		}

		if (!was_alarmed && !has_full_recv_buffer()) {
			/*
			 * Nothing to do.  Wait for something.
			 */
			io_handler();
		}

		if (alarm_flag) {	/* alarmed? */
			was_alarmed = true;
			alarm_flag = false;
		}

		if (was_alarmed) {
			UNBLOCK_IO_AND_ALARM();
			/*
			 * Out here, signals are unblocked.  Call timer routine
			 * to process expiry.
			 */
			timer();
			was_alarmed = false;
			BLOCK_IO_AND_ALARM();
		}

# endif		/* !HAVE_IO_COMPLETION_PORT */

# ifdef DEBUG_TIMING
		{
			l_fp pts;
			l_fp tsa, tsb;
			int bufcount = 0;

			intercept_get_systime(__func__, &pts);
			tsa = pts;
# endif
			rbuf = get_full_recv_buffer();
			while (rbuf != NULL) {
				if (alarm_flag) {
					was_alarmed = true;
					alarm_flag = false;
				}
				UNBLOCK_IO_AND_ALARM();

				if (was_alarmed) {
					/* avoid timer starvation during lengthy I/O handling */
					timer();
					was_alarmed = false;
				}

				/*
				 * Call the data procedure to handle each received
				 * packet.
				 */
				if (rbuf->receiver != NULL) {
# ifdef DEBUG_TIMING
					l_fp dts = pts;

					L_SUB(&dts, &rbuf->recv_time);
					DPRINTF(2, ("processing timestamp delta %s (with prec. fuzz)\n", lfptoa(&dts, 9)));
					collect_timing(rbuf, "buffer processing delay", 1, &dts);
					bufcount++;
# endif
					(*rbuf->receiver)(rbuf);
				} else {
					msyslog(LOG_ERR, "fatal: receive buffer callback NULL");
					abort();
				}

				BLOCK_IO_AND_ALARM();
				freerecvbuf(rbuf);
				rbuf = get_full_recv_buffer();
			}
# ifdef DEBUG_TIMING
			intercept_get_systime(__func__, &tsb);
			L_SUB(&tsb, &tsa);
			if (bufcount) {
				collect_timing(NULL, "processing", bufcount, &tsb);
				DPRINTF(2, ("processing time for %d buffers %s\n", bufcount, lfptoa(&tsb, 9)));
			}
		}
# endif

		/*
		 * Check files
		 */
		if (sawHUP) {
			sawHUP = false;
			msyslog(LOG_INFO, "Saw SIGHUP");

			reopen_logfile();

			{
			l_fp snow;
			time_t tnow;
			get_systime(&snow);
			time(&tnow);
			check_leap_file(false, snow.l_ui, &tnow);
			}
		}

		/*
		 * Go around again
		 */

# if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
		if (mdnsreg && (current_time - mdnsreg ) > 60 && mdnstries && sys_leap != LEAP_NOTINSYNC) {
			mdnsreg = current_time;
			msyslog(LOG_INFO, "Attempting to register mDNS");
			if ( DNSServiceRegister (&mdns, 0, 0, NULL, "_ntp._udp", NULL, NULL, 
			    htons(NTP_PORT), 0, NULL, NULL, NULL) != kDNSServiceErr_NoError ) {
				if (!--mdnstries) {
					msyslog(LOG_ERR, "Unable to register mDNS, giving up.");
				} else {	
					msyslog(LOG_INFO, "Unable to register mDNS, will try later.");
				}
			} else {
				msyslog(LOG_INFO, "mDNS service registered.");
				mdnsreg = false;
			}
		}
# endif /* ENABLE_MDNS_REGISTRATION */

	}
	UNBLOCK_IO_AND_ALARM();
}


#if defined(SIGDIE1)
/*
 * finish - exit gracefully
 */
static void
finish_safe(
	int sig
	)
{
	const char *sig_desc;

	sig_desc = strsignal(sig);
	if (sig_desc == NULL)
		sig_desc = "";
	msyslog(LOG_NOTICE, "%s exiting on signal %d (%s)", progname,
		sig, sig_desc);
	/* See Bug 2513 and Bug 2522 re the unlink of PIDFILE */
# if defined(HAVE_DNS_SD_H) && defined(ENABLE_MDNS_REGISTRATION)
	if (mdns != NULL)
		DNSServiceRefDeallocate(mdns);
# endif
	peer_cleanup();
	intercept_exit(0);
}

void
finish(
	int	sig
	)
{
	signalled = true;
	signo = sig;
}

/*
 * catchHUP - set flag to check files
 */
static void catchHUP(int sig)
{
	UNUSED_ARG(sig);
	sawHUP = true;
}

#endif	/* SIGDIE1 */


/*
 * wait_child_sync_if - implements parent side of -w/--wait-sync
 */
# ifdef HAVE_WORKING_FORK
static int
wait_child_sync_if(
	int	pipe_read_fd,
	long	wait_sync
	)
{
	int	rc;
	int	exit_code;
	time_t	wait_end_time;
	time_t	cur_time;
	time_t	wait_rem;
	fd_set	readset;
	struct timeval wtimeout;

	if (0 == wait_sync) 
		return 0;

	/* waitsync_fd_to_close used solely by child */
	close(waitsync_fd_to_close);
	wait_end_time = time(NULL) + wait_sync;
	do {
		cur_time = time(NULL);
		wait_rem = (wait_end_time > cur_time)
				? (wait_end_time - cur_time)
				: 0;
		wtimeout.tv_sec = wait_rem;
		wtimeout.tv_usec = 0;
		FD_ZERO(&readset);
		FD_SET(pipe_read_fd, &readset);
		rc = select(pipe_read_fd + 1, &readset, NULL, NULL,
			    &wtimeout);
		if (-1 == rc) {
			if (EINTR == errno)
				continue;
			exit_code = (errno) ? errno : -1;
			msyslog(LOG_ERR,
				"--wait-sync select failed: %m");
			return exit_code;
		}
		if (0 == rc) {
			/*
			 * select() indicated a timeout, but in case
			 * its timeouts are affected by a step of the
			 * system clock, select() again with a zero 
			 * timeout to confirm.
			 */
			FD_ZERO(&readset);
			FD_SET(pipe_read_fd, &readset);
			wtimeout.tv_sec = 0;
			wtimeout.tv_usec = 0;
			rc = select(pipe_read_fd + 1, &readset, NULL,
				    NULL, &wtimeout);
			if (0 == rc)	/* select() timeout */
				break;
			else		/* readable */
				return 0;
		} else			/* readable */
			return 0;
	} while (wait_rem > 0);

	fprintf(stderr, "%s: -w/--wait-sync %ld timed out.\n",
		progname, wait_sync);
	return ETIMEDOUT;
}
# endif	/* HAVE_WORKING_FORK */


/*
 * assertion_failed - Redirect assertion failures to msyslog().
 */
static void
assertion_failed(
	const char *file,
	int line,
	isc_assertiontype_t type,
	const char *cond
	)
{
	isc_assertion_setcallback(NULL);    /* Avoid recursion */

	msyslog(LOG_ERR, "%s:%d: %s(%s) failed",
		file, line, isc_assertion_typetotext(type), cond);
	msyslog(LOG_ERR, "exiting (due to assertion failure)");

#if defined(DEBUG) && defined(SYS_WINNT)
	if (debug)
		DebugBreak();
#endif

	abort();
}


/*
 * library_fatal_error - Handle fatal errors from our libraries.
 */
static void
library_fatal_error(
	const char *file,
	int line,
	const char *format,
	va_list args
	)
{
	char errbuf[256];

	isc_error_setfatal(NULL);  /* Avoid recursion */

	msyslog(LOG_ERR, "%s:%d: fatal error:", file, line);
	vsnprintf(errbuf, sizeof(errbuf), format, args);
	msyslog(LOG_ERR, "%s", errbuf);
	msyslog(LOG_ERR, "exiting (due to fatal error in library)");

#if defined(DEBUG) && defined(SYS_WINNT)
	if (debug)
		DebugBreak();
#endif

	abort();
}


/*
 * library_unexpected_error - Handle non fatal errors from our libraries.
 */
# define MAX_UNEXPECTED_ERRORS 100
int unexpected_error_cnt = 0;
static void
library_unexpected_error(
	const char *file,
	int line,
	const char *format,
	va_list args
	)
{
	char errbuf[256];

	if (unexpected_error_cnt >= MAX_UNEXPECTED_ERRORS)
		return;	/* avoid clutter in log */

	msyslog(LOG_ERR, "%s:%d: unexpected error:", file, line);
	vsnprintf(errbuf, sizeof(errbuf), format, args);
	msyslog(LOG_ERR, "%s", errbuf);

	if (++unexpected_error_cnt == MAX_UNEXPECTED_ERRORS)
		msyslog(LOG_ERR, "Too many errors.  Shutting up.");

}

#if !defined(SYS_WINNT)
# ifdef DEBUG

/*
 * moredebug - increase debugging verbosity
 */
static void
moredebug(
	int sig
	)
{
	int saved_errno = errno;

	UNUSED_ARG(sig);
	if (debug < 255)
	{
		debug++;
		msyslog(LOG_DEBUG, "debug raised to %d", debug);
	}
	errno = saved_errno;
}


/*
 * lessdebug - decrease debugging verbosity
 */
static void
lessdebug(
	int sig
	)
{
	int saved_errno = errno;

	UNUSED_ARG(sig);
	if (debug > 0)
	{
		debug--;
		msyslog(LOG_DEBUG, "debug lowered to %d", debug);
	}
	errno = saved_errno;
}

# else	/* !DEBUG follows */


/*
 * no_debug - We don't do the debug here.
 */
static void
no_debug(
	int sig
	)
{
	int saved_errno = errno;

	msyslog(LOG_DEBUG, "ntpd not compiled for debugging (signal %d)", sig);
	errno = saved_errno;
}
# endif	/* !DEBUG */
#endif	/* !SYS_WINNT */
