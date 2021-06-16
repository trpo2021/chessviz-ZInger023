#include "PSWG_lib/func.h"
#include "ctest.h"
#include <ctype.h>

CTEST(getrand, test)
{
    int expect = 5;
    int result = 0;

    int temp = getrand(0, 100);

    if ((isdigit(temp) != 0) && (temp <= 100) && (temp >= 0)) {
        result = 5;
    }
    ASSERT_EQUAL(expect, result);
}
