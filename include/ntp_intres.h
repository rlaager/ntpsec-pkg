/*
 * ntp_intres.h - client interface to blocking-worker name resolution.
 */
#ifndef GUARD_NTP_INTRES_H
#define GUARD_NTP_INTRES_H

#include "ntp_worker.h"
#include "ntp_malloc.h"

struct addrinfo *copy_addrinfo_impl(const struct addrinfo *
#ifdef EREALLOC_CALLSITE	/* from ntp_malloc.h */
							   ,
				    const char *, int
#endif
					 );
struct addrinfo *copy_addrinfo_list_impl(const struct addrinfo *
#ifdef EREALLOC_CALLSITE	/* from ntp_malloc.h */
								,
					 const char *, int
#endif
					 );
#ifdef EREALLOC_CALLSITE
# define copy_addrinfo(l) \
	 copy_addrinfo_impl((l), __FILE__, __LINE__)
# define copy_addrinfo_list(l) \
	 copy_addrinfo_list_impl((l), __FILE__, __LINE__)
#else
# define copy_addrinfo(l)	copy_addrinfo_impl(l)
# define copy_addrinfo_list(l)	copy_addrinfo_list_impl(l)
#endif

#ifdef USE_WORKER
#define	INITIAL_DNS_RETRY	2	/* seconds between queries */

/*
 * you call getaddrinfo_sometime(name, service, &hints, retry, callback_func, context);
 * later (*callback_func)(rescode, gai_errno, context, name, service, hints, ai_result) is called.
 */
typedef void	(*gai_sometime_callback)
		    (int, int, void *, const char *, const char *,
		     const struct addrinfo *, const struct addrinfo *);
extern int	getaddrinfo_sometime(const char *, const char *,
				     const struct addrinfo *, int,
				     gai_sometime_callback, void *);
/*
 * In gai_sometime_callback routines, the resulting addrinfo list is
 * only available until the callback returns.  To hold on to the list
 * of addresses after the callback returns, use copy_addrinfo_list():
 *
 * struct addrinfo *copy_addrinfo_list(const struct addrinfo *);
 */


/*
 * you call getnameinfo_sometime(sockaddr, namelen, servlen, flags, callback_func, context);
 * later (*callback_func)(rescode, gni_errno, sockaddr, flags, name, service, context) is called.
 */
typedef void	(*gni_sometime_callback)
		    (int, int, sockaddr_u *, int, const char *,
		     const char *, void *);
extern int getnameinfo_sometime(sockaddr_u *, size_t, size_t, int,
				gni_sometime_callback, void *);
#endif	/* USE_WORKER */

/* intres_timeout_req() is provided by the client, ntpd or ntpdig. */
extern void intres_timeout_req(u_int);

#endif	/* GUARD_NTP_INTRES_H */
