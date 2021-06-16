#include "PSWG_lib/func.h"
#include "ctest.h"

CTEST(key_search, correct_input)
{
    char** input_str[]
            = {input_str1[],
               input_str2[],
               input_str3[],
               input_str4[],
               input_str5[]};
    char* input_str1[] = {main};
    char* input_str2[] = {-l5};
    char* input_str3[] = {-N2};
    char* input_str4[] = {-O};
    char* input_str5[] = {
        -y'; int countN = 1; int countc = 0; int countn = 0; int county = 0; int countA
        = 0;
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
