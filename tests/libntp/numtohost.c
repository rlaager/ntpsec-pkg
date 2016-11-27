#include "config.h"
#include "ntp_stdlib.h"

#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(numtohost);

TEST_SETUP(numtohost) {}

TEST_TEAR_DOWN(numtohost) {}



TEST(numtohost, LoopbackNetNonResolve) {
	/* A loopback address in 127.0.0.0/8 is chosen, and
	 * numtohost() should not try to resolve it unless
	 * it is 127.0.0.1
	 */

	u_int32_t input = 127*256*256*256 + 1*256 + 1; // 127.0.1.1

	TEST_ASSERT_EQUAL_STRING("127.0.1.1", numtohost(htonl(input)));
}

TEST_GROUP_RUNNER(numtohost) {
	RUN_TEST_CASE(numtohost, LoopbackNetNonResolve);
}
