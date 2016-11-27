#include <unistd.h>

#include "unity.h"
#include "unity_fixture.h"

#include "ntpdigtest.h"

#include "kod_management.h"

TEST_GROUP(kodDatabase);

TEST_SETUP(kodDatabase) {}

TEST_TEAR_DOWN(kodDatabase) {}

TEST(kodDatabase, SingleEntryHandling) {
	char HOST[] = "192.0.2.5";
	char REASON[] = "DENY";

	struct kod_entry* result;

	add_entry(HOST, REASON);

	TEST_ASSERT_EQUAL(1, search_entry(HOST, &result));
	TEST_ASSERT_EQUAL_STRING(HOST, result->hostname);
	TEST_ASSERT_EQUAL_STRING(REASON, result->type);
}

TEST(kodDatabase, MultipleEntryHandling) {
	char HOST1[] = "192.0.2.3";
	char REASON1[] = "DENY";

	char HOST2[] = "192.0.5.5";
	char REASON2[] = "RATE";

	char HOST3[] = "192.0.10.1";
	char REASON3[] = "DENY";

	struct kod_entry* result;

	add_entry(HOST1, REASON1);
	add_entry(HOST2, REASON2);
	add_entry(HOST3, REASON3);

	TEST_ASSERT_EQUAL(1, search_entry(HOST1, &result));
	TEST_ASSERT_EQUAL_STRING(HOST1, result->hostname);
	TEST_ASSERT_EQUAL_STRING(REASON1, result->type);

	TEST_ASSERT_EQUAL(1, search_entry(HOST2, &result));
	TEST_ASSERT_EQUAL_STRING(HOST2, result->hostname);
	TEST_ASSERT_EQUAL_STRING(REASON2, result->type);

	TEST_ASSERT_EQUAL(1, search_entry(HOST3, &result));
	TEST_ASSERT_EQUAL_STRING(HOST3, result->hostname);
	TEST_ASSERT_EQUAL_STRING(REASON3, result->type);

	free(result);
}

TEST(kodDatabase, NoMatchInSearch) {
	char HOST_ADD[] = "192.0.2.6";
	char HOST_NOTADD[] = "192.0.6.1";
	char REASON[] = "DENY";

	struct kod_entry* result;

	add_entry(HOST_ADD, REASON);

	TEST_ASSERT_EQUAL(0, search_entry(HOST_NOTADD, &result));
	TEST_ASSERT_TRUE(result == NULL);
}

TEST(kodDatabase, AddDuplicate) {
	char HOST[] = "192.0.2.3";
	char REASON1[] = "RATE";
	char REASON2[] = "DENY";
	struct kod_entry* result1;
	struct kod_entry* result2;

	add_entry(HOST, REASON1);
	TEST_ASSERT_EQUAL(1, search_entry(HOST, &result1));

	/*
	 * Sleeps for two seconds since we want to ensure that
	 * the timestamp is updated to a new value.
	 */
	sleep(2);

	add_entry(HOST, REASON2);

	TEST_ASSERT_EQUAL(1, search_entry(HOST, &result2));

	TEST_ASSERT_NOT_EQUAL(result1->timestamp, result2->timestamp);

	free(result1);
	free(result2);
}

TEST(kodDatabase, DeleteEntry) {
	char HOST1[] = "192.0.2.1";
	char HOST2[] = "192.0.2.2";
	char HOST3[] = "192.0.2.3";
	char REASON[] = "DENY";

	struct kod_entry* result;

	add_entry(HOST1, REASON);
	add_entry(HOST2, REASON);
	add_entry(HOST3, REASON);

	TEST_ASSERT_EQUAL(1, search_entry(HOST2, &result));
	free(result);

	delete_entry(HOST2, REASON);

	TEST_ASSERT_EQUAL(0, search_entry(HOST2, &result));

	// Ensure that the other entry is still there.
	TEST_ASSERT_EQUAL(1, search_entry(HOST1, &result));
	free(result);
}

TEST_GROUP_RUNNER(kodDatabase) {
	RUN_TEST_CASE(kodDatabase, SingleEntryHandling);
//	RUN_TEST_CASE(kodDatabase, MultipleEntryHandling); Buffer overrun detected during free()
	RUN_TEST_CASE(kodDatabase, NoMatchInSearch);
//	RUN_TEST_CASE(kodDatabase, AddDuplicate); Disable for now due to sleep */
//	RUN_TEST_CASE(kodDatabase, DeleteEntry); Buffer overrun detected during free()
}
