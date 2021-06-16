#include "PSWG_lib/func.h"
#include "ctest.h"
#include <ctype.h>

CTEST(swap, test)
{
    char a = 'a';
    char b = 'b';
    char temp = 'a';
    int expect = 5;
    int result = 0;

    swap(&a, &b);
    if (b == temp) {
        result = 5;
    }
    ASSERT_EQUAL(expect, result);
}
