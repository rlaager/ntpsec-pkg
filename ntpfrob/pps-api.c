/*
 *
 * Try to run this code to see what the PPS-API finds. You give it the
 * device as argument and you may have to modify the pp.mode = BLA assignment.
 *
 * Code originally by Poul-Henning Kemp.
 *
 * Copyright 2015 by the NTPsec project contributors
 *  SPDX-License-Identifier: BSD-2-Clause
 */

#include "config.h"

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#ifdef HAVE_SYS_TIMEPPS_H
#include <sys/timepps.h>

#ifdef timespecsub
  /* It's defined on NetBSD */
# undef timespecsub
#endif
#define timespecsub(vvp, uvp)                                           \
        do {                                                            \
                (vvp)->tv_sec -= (uvp)->tv_sec;                         \
                (vvp)->tv_nsec -= (uvp)->tv_nsec;                       \
                if ((vvp)->tv_nsec < 0) {                               \
                        (vvp)->tv_sec--;                                \
                        (vvp)->tv_nsec += 1000000000;                   \
                }                                                       \
        } while (0)


void
Chew(struct timespec *tsa, struct timespec *tsc, unsigned sa, unsigned sc)
{
	struct timespec ts;

	printf("%ld.%09ld ", (long)tsa->tv_sec, tsa->tv_nsec);
	printf("%ld.%09ld ", (long)tsc->tv_sec, tsc->tv_nsec);
	printf("%u %u ", sa, sc);

	ts = *tsc;
	timespecsub(&ts,tsa);
	printf("%.9f ", ts.tv_sec + ts.tv_nsec / 1e9);
	printf("\n");
	fflush(stdout);
}

static int err(int out, const char *legend)
{
    fprintf(stderr, "ntpfrob: %s\n", legend);
    exit(out);
}
#endif /* HAVE_SYS_TIMEPPS_H */

void ppscheck(char *device)
{
#ifndef HAVE_SYS_TIMEPPS_H
	(void)device;
 	fputs("ntpfrob: PPS is not available.\n", stderr);
	exit(1);
#else
	int fd;
	pps_info_t pi;
	pps_params_t pp;
	pps_handle_t ph;
	int i, mode;
	u_int olda = 0, oldc = 0;
	struct timespec to;

	if (device == NULL)
		device = "/dev/cuaa1";
	setbuf(stdout, 0);
	fd = open(device, O_RDONLY);
	if (fd < 0) 
		err(1, device);
	i = time_pps_create(fd, &ph);
	if (i < 0)
		err(1, "time_pps_create");

	i = time_pps_getcap(ph, &mode);
	if (i < 0)
		err(1, "time_pps_getcap");

	/* pp.mode = PPS_CAPTUREASSERT | PPS_ECHOASSERT; */
	pp.mode = PPS_CAPTUREBOTH;
	/* pp.mode = PPS_CAPTUREASSERT; */

	/* coverity[uninit_use_in_call] */
	i = time_pps_setparams(ph, &pp);
	if (i < 0)
		err(1, "time_pps_setparams");

	while (1) {
		to.tv_nsec = 0;
		to.tv_sec = 0;
		i = time_pps_fetch(ph, PPS_TSFMT_TSPEC, &pi, &to);
		if (i < 0)
			err(1, "time_pps_fetch");
		if (olda == pi.assert_sequence &&
		    oldc == pi.clear_sequence) {
			usleep(10000);
			continue;
		}

		Chew(&pi.assert_timestamp, &pi.clear_timestamp,
			pi.assert_sequence, pi.clear_sequence);
		olda = pi.assert_sequence;
		oldc = pi.clear_sequence;
	}
#endif /* HAVE_SYS_TIMEPPS_H */
}

/* end */
