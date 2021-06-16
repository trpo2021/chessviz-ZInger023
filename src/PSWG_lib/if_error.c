#include "func.h"

int if_error(
        int length,
        int countc,
        int countn,
        int countA,
        int count0,
        int key_count)
{
    if (((countA != 0) && (countc != 0))
        || ((count0 != 0)
            && (countn != 0))) //Проверка на наличие взаимоисключающих ключей
    {
        printf("Error : You have entered mutually exclusive keys\n");
        return 4;
    }

    if (length == 0) { //Пользователь запросил пароль длинны 0
        printf("\t The password cannot consist of 0 symbols\n ");
        return 3;
    }
    if (key_count > length) {
        printf("\t Entered length doesn't fit amount of entered keys\n ");
        return 1;
    }
    return 0;
}
