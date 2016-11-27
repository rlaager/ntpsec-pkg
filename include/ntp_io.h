#ifndef GUARD_NTP_IO_H
#define GUARD_NTP_IO_H

#include "ntp_workimpl.h"

/*
 * POSIX says use <fnctl.h> to get O_* symbols and
 * SEEK_SET symbol form <unistd.h>.
 */
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <netinet/in.h>

#ifdef SYS_WINNT
# include <io.h>
# include "win32_io.h"
#endif

#include <isc/netaddr.h>

#include "libntp.h"	/* This needs Something above for GETDTABLESIZE */

/*
 * NIC rule match types
 */
typedef enum {
	MATCH_ALL,
	MATCH_IPV4,
	MATCH_IPV6,
	MATCH_WILDCARD,
	MATCH_IFNAME,
	MATCH_IFADDR
} nic_rule_match;

/*
 * NIC rule actions
 */
typedef enum {
	ACTION_LISTEN,
	ACTION_IGNORE,
	ACTION_DROP
} nic_rule_action;


extern int	qos;
SOCKET		move_fd(SOCKET fd);
bool	get_broadcastclient_flag(void);
extern bool	is_ip_address(const char *, u_short, sockaddr_u *);
extern void	sau_from_netaddr(sockaddr_u *, const isc_netaddr_t *);
extern void	add_nic_rule(nic_rule_match match_type,
			     const char *if_name, int prefixlen,
			     nic_rule_action action);
#ifndef HAVE_IO_COMPLETION_PORT
extern	void	maintain_activefds(int fd, int closing);
#else
#define		maintain_activefds(f, c)	do {} while (0)
#endif

/* hack to ignore GCC Unused Result */
#define IGNORE(r) do{if(r){}}while(0)

#endif	/* GUARD_NTP_IO_H */
