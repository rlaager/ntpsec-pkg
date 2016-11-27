/*
 * ntp_unixtime.h - much of what was here is now in timevalops.h
 */

#ifndef GUARD_NTP_UNIXTIME_H
#define GUARD_NTP_UNIXTIME_H

#include "ntp_types.h"	/* picks up time.h via ntp_machine.h */
#include "ntp_calendar.h"

#include <time.h>

#ifndef CLOCK_REALTIME
/*
 * Pacify platforms that don't have a real clock_gettime(2),
 * notably Mac OS X.
 */
#define CLOCK_REALTIME	0
#define CLOCK_MONOTONIC	1
typedef int clockid_t;
int clock_gettime(clockid_t clock_id, struct timespec *tp);
#endif

/*
 * Time of day conversion constant.  NTP's time scale starts in 1900,
 * Unix in 1970.  The value is 1970 - 1900 in seconds, 0x83aa7e80 or
 * 2208988800.  This is larger than 32-bit INT_MAX, so unsigned
 * type is forced.
 */
#define	JAN_1970 ((u_int)NTP_TO_UNIX_DAYS * (u_int)SECSPERDAY)

#endif /* GUARD_NTP_UNIXTIME_H */
