#include "PSWG_lib/func.h"
#include "ctest.h"
#include <ctype.h>

CTEST(gen_pswd, test)
{
    int we = 0;
    int i = 0;
    int length = 5;
    int countc = 0;
    int countn = 1;
    int countA = 1;
    int count0 = 0;
    int expect = 5;
    char arr_result[10];
    int result = 0;
    char* arr_temp;
    arr_temp = malloc((10) * sizeof(char));

    arr_temp = gen_pswd(length, countc, countn, county, countA, count0);

    strcpy(arr_result, arr_temp);

    while ((we == 0) && (i < 10)) {
        we = isdigit(arr_result[i]);
        i++;
    }

    if ((strlen(arr_result) == 5) && (we != 0)) {
        result = 5;
    }
    ASSERT_EQUAL(expect, result);
}
