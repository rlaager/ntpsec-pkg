#include <config.h>

#include "log.h"

char *progname;		/* for msyslog use too */

static void cleanup_log(void);

void
ntpdig_init_logging(
	const char *prog
	)
{
	termlogit = false;
	init_logging(prog, 0, false);
	termlogit_pid = false;
	msyslog_include_timestamp = false;
}


void
open_logfile(
	const char *logfile
	)
{
	change_logfile(logfile, false);
	atexit(cleanup_log);
}


static void
cleanup_log(void)
{
	syslogit = true;
	fflush(syslog_file);
	fclose(syslog_file);
	syslog_file = NULL;
}
