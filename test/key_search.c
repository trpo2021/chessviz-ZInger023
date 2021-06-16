#include "PSWG_lib/func.h"
#include "ctest.h"

CTEST(key_search, correct_input)
{
    char* input_str[] = {main, -l5, -N2, -O, -y};
    int countN = 1;
    int countc = 0;
    int countn = 0;
    int county = 0;
    int countA = 0;
    int count0 = 0;
    int length = 10;
    int expect = 5;
    int result = 0;

    key_search(input_str, 5);
    if (length == 5 && countN == 2 && countc == 0 && countn == 0 && county == 1
        && countA == 0 && count0 == 1) {
        result = 5;
    }
    ASSERT_EQUAL(expect, result);
}
