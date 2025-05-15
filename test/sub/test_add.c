#include "unity.h"
#include "mock_enjoy.h"
#include "sub.h"

// == 演算テスト ==
// 足し算のテスト
void test_sample(void)
{
    get_something_fake.return_val = 0; // モックの戻り値を設定
    int ret = add(1, 2);
    TEST_ASSERT_EQUAL(3, ret);
}

typedef struct
{
    int a;
    int b;
    int expected;
} TestTable;

void test_add2(void)
{
    TestTable testTable[] = {
        {1, 2, 3},
        {3, 4, 7},
        {5, 6, 11},
    };

    for (int i = 0; i < sizeof(testTable) / sizeof(TestTable); i++)
    {
        int ret = add(testTable[i].a, testTable[i].b);
        TEST_ASSERT_EQUAL(testTable[i].expected, ret);
    }
}

// 2. 引き算のテスト
void test_add(void)
{
    int ret = add(1, 2);
    TEST_ASSERT_EQUAL(3, ret);
}