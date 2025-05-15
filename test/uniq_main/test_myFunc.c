#include "unity.h"
#include "uniq_main.h"
#include "mock_sub.h"
#include "mock_enjoy.h"

void setUp(void)
{
    // printf("setUp\n");
}

void tearDown(void)
{
    // printf("tearDown\n");
}

enjoy_callback(int *pInt, int cmock_num_calls)
{
    printf("enjoy called %d\n", *pInt);
}

void test_b(void)
{
    // add_ExpectAndReturn(1, 2, 3);
    // add_ExpectAndReturn(3, 4, 7);
    int a = 0;
    enjoy_Expect(&a);
    int b = 1;
    enjoy_Expect(&b);
    // enjoy_Ignore();
    // enjoy_Ignore();
    enjoy_AddCallback(enjoy_callback);

    // enjpy
    // lol();

    int res = myFunc();
    // TEST_ASSERT_CALLED_TIMES(10, enjoy);
    TEST_ASSERT_EQUAL(10, res);

    mock_enjoy_Verify

    for (int i = 0; i < 10; i++)
    {
        // printf("hisotry %d\n", enjoy_fake.arg0_history[i]);
    }
}