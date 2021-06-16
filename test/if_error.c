#include "PSWG_lib/func.h"
#include "ctest.h"

CTEST(if_error, conflicting_types)
{
    int length = 5;
    int countc = 0;
    int countn = 1;
    int countA = 1;
    int count0 = 1;
    expect = 4;

    int result = if_error(length, countc, countn, countA, count0);
    ASSERT_EQUAL(expect, result);
}

CTEST(if_error, too_small_length)
{
    int length = 1;
    int countc = 0;
    int countn = 1;
    int countA = 1;
    int count0 = 0;
    int key_count = 2;
    int expect = 1;

    int result = if_error(length, countc, countn, countA, count0, key_count);
    ASSERT_EQUAL(expect, result);
}

CTEST(if_error, zero_length)
{
    int length = 0;
    int countc = 0;
    int countn = 1;
    int countA = 1;
    int count0 = 1;
    int expect = 3;

    int result = if_error(length, countc, countn, countA, count0);
    ASSERT_EQUAL(expect, result);
}

CTEST(if_error, correct_input)
{
    int length = 9;
    int countc = 0;
    int countn = 1;
    int countA = 1;
    int count0 = 0;
    int expect = 0;

    int result = if_error(length, countc, countn, countA, count0);
    ASSERT_EQUAL(expect, result);
}
