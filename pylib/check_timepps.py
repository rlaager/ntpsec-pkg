TIMEPPS_FRAG = """
#include <sys/types.h>

#ifdef HAVE_TIMEPPS_H
# include <timepps.h>
#else
# ifdef HAVE_SYS_TIMEPPS_H
#  include <sys/time.h>   /* Needed on NetBSD */
#  include <sys/timepps.h>
# endif
#endif

int main(void) {
	pps_handle_t pps_h;
	time_pps_destroy (pps_h);

    return 0;
}
"""


def check_timepps(ctx):
	ctx.check_cc(
		fragment	= TIMEPPS_FRAG,
		define_name = "HAVE_PPSAPI",
		features	= "c",
		msg         = "Checking if PPS API works",
		mandatory	= False
	)

