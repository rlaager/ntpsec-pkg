#include "config.h"
#include "ntp_stdlib.h"

#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(strtolfp);

TEST_SETUP(strtolfp) {}

TEST_TEAR_DOWN(strtolfp) {}

#include "lfptest.h"

/* This class tests both atolfp and mstolfp */


TEST(strtolfp, PositiveInteger) {
	const char *str = "500";
	const char *str_ms = "500000";

	l_fp expected = {{500},0};
	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, NegativeInteger) {
	const char *str = "-300";
	const char *str_ms = "-300000";

	l_fp expected;
	expected.l_i = -300;
	expected.l_uf = 0;

	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, PositiveFraction) {
	const char *str = "+500.5";
	const char *str_ms = "500500.0";

	l_fp expected = {{500}, HALF};
	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, NegativeFraction) {
	const char *str = "-300.75";
	const char *str_ms = "-300750";

	l_fp expected;
	expected.l_i = -301;
	expected.l_uf = QUARTER;

	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, PositiveMsFraction) {
	const char *str = "300.00025";
	const char *str_ms = "300000.25";

	l_fp expected = {{300}, QUARTER_PROMILLE_APPRX};
	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, NegativeMsFraction) {
	const char *str = "-199.99975";
	const char *str_ms = "-199999.75";

	l_fp expected;
	expected.l_i = -200;
	expected.l_uf = QUARTER_PROMILLE_APPRX;

	l_fp actual, actual_ms;

	TEST_ASSERT_TRUE(atolfp(str, &actual));
	TEST_ASSERT_TRUE(mstolfp(str_ms, &actual_ms));

	TEST_ASSERT_TRUE(IsEqual(&expected, &actual));
	TEST_ASSERT_TRUE(IsEqual(&expected, &actual_ms));
}

TEST(strtolfp, InvalidChars) {
	const char *str = "500.4a2";
	l_fp actual, actual_ms;

	TEST_ASSERT_FALSE(atolfp(str, &actual));
	TEST_ASSERT_FALSE(mstolfp(str, &actual_ms));
}

TEST_GROUP_RUNNER(strtolfp) {
	RUN_TEST_CASE(strtolfp, PositiveInteger);
	RUN_TEST_CASE(strtolfp, NegativeInteger);
	RUN_TEST_CASE(strtolfp, PositiveFraction);
	RUN_TEST_CASE(strtolfp, NegativeFraction);
	RUN_TEST_CASE(strtolfp, PositiveMsFraction);
	RUN_TEST_CASE(strtolfp, NegativeMsFraction);
	RUN_TEST_CASE(strtolfp, InvalidChars);
}
