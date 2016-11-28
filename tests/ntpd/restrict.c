#include "config.h"

#include "ntpd.h"
#include "ntp_lists.h"

#include "unity.h"
#include "unity_fixture.h"

/* Helper functions */

static sockaddr_u
create_sockaddr_u(unsigned short sin_port, char* ip_addr)
{
	sockaddr_u sockaddr;

	sockaddr.sa4.sin_family = AF_INET;
	sockaddr.sa4.sin_port = htons(sin_port);
	memset(sockaddr.sa4.sin_zero, 0, 8);
	sockaddr.sa4.sin_addr.s_addr = inet_addr(ip_addr);

	return sockaddr;
}

TEST_GROUP(hackrestrict);

TEST_SETUP(hackrestrict) {
	init_restrict();
}

u_long	current_time;	/* not used - restruct code needs it */

TEST_TEAR_DOWN(hackrestrict) {
	restrict_u *empty_restrict = malloc(sizeof(restrict_u));
	memset(empty_restrict, 0, sizeof(restrict_u));

	restrict_u *current;

	do {
		UNLINK_HEAD_SLIST(current, restrictlist4, link);
		if (current != NULL)
		{
			*current = *empty_restrict;
		}
	} while (current != NULL);

	do {
		UNLINK_HEAD_SLIST(current, restrictlist6, link);
		if (current != NULL)
		{
			*current = *empty_restrict;
		}
	} while (current != NULL);

	free(empty_restrict);
}

/* Tests */

TEST(hackrestrict, RestrictionsAreEmptyAfterInit) {
	restrict_u *rl4 = malloc(sizeof(restrict_u));
	restrict_u *rl6 = malloc(sizeof(restrict_u));

	memset(rl4, 0, sizeof(restrict_u));
	memset(rl6, 0, sizeof(restrict_u));

	TEST_ASSERT_EQUAL(rl4->count, restrictlist4->count);
	TEST_ASSERT_EQUAL(rl4->flags, restrictlist4->flags);
	TEST_ASSERT_EQUAL(rl4->mflags, restrictlist4->mflags);
	TEST_ASSERT_EQUAL(rl4->expire, restrictlist4->expire);
	TEST_ASSERT_EQUAL(rl4->u.v4.addr, restrictlist4->u.v4.addr);
	TEST_ASSERT_EQUAL(rl4->u.v4.mask, restrictlist4->u.v4.mask);

	TEST_ASSERT_EQUAL(rl6->count, restrictlist6->count);
	TEST_ASSERT_EQUAL(rl6->flags, restrictlist6->flags);
	TEST_ASSERT_EQUAL(rl6->mflags, restrictlist6->mflags);
	TEST_ASSERT_EQUAL(rl6->expire, restrictlist6->expire);

	free(rl4);
	free(rl6);
}


TEST(hackrestrict, ReturnsCorrectDefaultRestrictions) {
	sockaddr_u sockaddr = create_sockaddr_u(54321, "63.161.169.137");

	u_short retval = restrictions(&sockaddr);

	TEST_ASSERT_EQUAL(0, retval);
}


TEST(hackrestrict, HackingDefaultRestriction) {
	/*
	*	We change the flag of the default restriction,
	*	and check if restriction() returns that flag
	*/
	const u_short flags = 42;

	sockaddr_u resaddr = create_sockaddr_u(54321, "0.0.0.0");
	sockaddr_u resmask = create_sockaddr_u(54321, "0.0.0.0");

	hack_restrict(RESTRICT_FLAGS, &resaddr, &resmask, 0, flags, 0);

	sockaddr_u sockaddr = create_sockaddr_u(54321, "111.123.251.124");

	TEST_ASSERT_EQUAL(flags, restrictions(&sockaddr));
}


TEST(hackrestrict, CantRemoveDefaultEntry) {
	sockaddr_u resaddr = create_sockaddr_u(54321, "0.0.0.0");
	sockaddr_u resmask = create_sockaddr_u(54321, "0.0.0.0");

	hack_restrict(RESTRICT_REMOVE, &resaddr, &resmask, 0, 0, 0);

	TEST_ASSERT_EQUAL(0, restrictions(&resaddr));
}


TEST(hackrestrict, AddingNewRestriction) {
	sockaddr_u resaddr = create_sockaddr_u(54321, "11.22.33.44");
	sockaddr_u resmask = create_sockaddr_u(54321, "128.0.0.0");

	const u_short flags = 42;

	hack_restrict(RESTRICT_FLAGS, &resaddr, &resmask, 0, flags, 0);

	TEST_ASSERT_EQUAL(flags, restrictions(&resaddr));
}


TEST(hackrestrict, TheMostFittingRestrictionIsMatched) {
	sockaddr_u resaddr_target = create_sockaddr_u(54321, "11.22.33.44");

	sockaddr_u resaddr_not_matching = create_sockaddr_u(54321, "11.99.33.44");
	sockaddr_u resmask_not_matching = create_sockaddr_u(54321, "255.255.0.0");

	sockaddr_u resaddr_best_match = create_sockaddr_u(54321, "11.22.30.20");
	sockaddr_u resmask_best_match = create_sockaddr_u(54321, "255.255.0.0");

	/* it also matches, but we prefer the one above, as it's more specific */
	sockaddr_u resaddr_second_match = create_sockaddr_u(54321, "11.99.33.44");
	sockaddr_u resmask_second_match = create_sockaddr_u(54321, "255.0.0.0");

	hack_restrict(RESTRICT_FLAGS, &resaddr_not_matching, &resmask_not_matching, 0, 11, 0);
	hack_restrict(RESTRICT_FLAGS, &resaddr_best_match, &resmask_best_match, 0, 22, 0);
	hack_restrict(RESTRICT_FLAGS, &resaddr_second_match, &resmask_second_match, 0, 128, 0);

	TEST_ASSERT_EQUAL(22, restrictions(&resaddr_target));
}


TEST(hackrestrict, DeletedRestrictionIsNotMatched) {
	sockaddr_u resaddr_target = create_sockaddr_u(54321, "11.22.33.44");

	sockaddr_u resaddr_not_matching = create_sockaddr_u(54321, "11.99.33.44");
	sockaddr_u resmask_not_matching = create_sockaddr_u(54321, "255.255.0.0");

	sockaddr_u resaddr_best_match = create_sockaddr_u(54321, "11.22.30.20");
	sockaddr_u resmask_best_match = create_sockaddr_u(54321, "255.255.0.0");

	sockaddr_u resaddr_second_match = create_sockaddr_u(54321, "11.99.33.44");
	sockaddr_u resmask_second_match = create_sockaddr_u(54321, "255.0.0.0");

	hack_restrict(RESTRICT_FLAGS, &resaddr_not_matching, &resmask_not_matching, 0, 11, 0);
	hack_restrict(RESTRICT_FLAGS, &resaddr_best_match, &resmask_best_match, 0, 22, 0);
	hack_restrict(RESTRICT_FLAGS, &resaddr_second_match, &resmask_second_match, 0, 128, 0);

	/* deleting the best match*/
	hack_restrict(RESTRICT_REMOVE, &resaddr_best_match, &resmask_best_match, 0, 22, 0);

	TEST_ASSERT_EQUAL(128, restrictions(&resaddr_target));
}


TEST(hackrestrict, RestrictUnflagWorks) {
	sockaddr_u resaddr = create_sockaddr_u(54321, "11.22.30.20");
	sockaddr_u resmask = create_sockaddr_u(54321, "255.255.0.0");

	hack_restrict(RESTRICT_FLAGS, &resaddr, &resmask, 0, 11, 0);

	hack_restrict(RESTRICT_UNFLAG, &resaddr, &resmask, 0, 10, 0);

	TEST_ASSERT_EQUAL(1, restrictions(&resaddr));
}

TEST_GROUP_RUNNER(hackrestrict) {
	RUN_TEST_CASE(hackrestrict, RestrictionsAreEmptyAfterInit);
	RUN_TEST_CASE(hackrestrict, ReturnsCorrectDefaultRestrictions);
	RUN_TEST_CASE(hackrestrict, HackingDefaultRestriction);
	RUN_TEST_CASE(hackrestrict, CantRemoveDefaultEntry);
	RUN_TEST_CASE(hackrestrict, AddingNewRestriction);
	RUN_TEST_CASE(hackrestrict, TheMostFittingRestrictionIsMatched);
	RUN_TEST_CASE(hackrestrict, DeletedRestrictionIsNotMatched);
	RUN_TEST_CASE(hackrestrict, RestrictUnflagWorks);
}
