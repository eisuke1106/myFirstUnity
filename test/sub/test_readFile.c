#include "unity.h"
#include "fff.h"
#include "mock_enjoy.h"
TEST_SOURCE_FILE("sub.c")
// https://github.com/ThrowTheSwitch/Ceedling/blob/master/docs/CeedlingPacket.md#commented-sample-test-file

#define fopen fopenMock;
FAKE_VALUE_FUNC(FILE *, fopenMock, char *, char *);

#define fclose fcloseMock;
FAKE_VALUE_FUNC(FILE *, fcloseMock, char *, char *);

void test_readFile(void)
{
    fopenMock_fake.return_val = NULL;
    readFile("test.txt");
}