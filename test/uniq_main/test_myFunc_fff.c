#include "unity.h"
#include "uniq_main.h"
#include "mock_sub.h"
#include "mock_enjoy.h"

FAKE_VALUE_FUNC(int, myAdd, int, int);

void setUp(void)
{
    printf("setUp\n");
    mock_enjoy_Init();
}

void tearDown(void)
{
    printf("tearDown\n");
}

void test_b(void)
{
    // add_ExpectAndReturn(1, 2, 3);
    // add_ExpectAndReturn(3, 4, 7);
    myAdd_fake.return_val = 7;
    // enjoy_Expect();
    // enjoy_Expect();

    // enjpy
    lol();

    int res = myFunc();
    // TEST_ASSERT_CALLED_TIMES(10, enjoy);
    TEST_ASSERT_EQUAL(14, res);

    for (int i = 0; i < 10; i++)
    {
        printf("hisotry %d\n", enjoy_fake.arg0_history[i]);
    }
}