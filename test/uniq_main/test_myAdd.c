#include "unity.h"
#include "mock_enjoy.h"

TEST_SOURCE_FILE("uniq_main.c")

void setUp(void)
{
    printf("setUp\n");
    mock_enjoy_Init();
}

void tearDown(void)
{
    printf("tearDown\n");
}

void test_a(void)
{
    printf("start test %s\n", __func__);
    int res = myAdd(1, 2);
    TEST_ASSERT_EQUAL(3, res);
}

void test_b(void)
{
    printf("start test %s\n", __func__);
    int res = myAdd(1, 2);
    TEST_ASSERT_EQUAL(3, res);
}