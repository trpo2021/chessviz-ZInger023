#include "func.h"

char* gen_pswd(
        int length,
        int countc1,
        int countn1,
        int county1,
        int countA1,
        int count01)
{
    int i;
    unsigned int nrand;

    char* pswd;

    char s_latin[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                      'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                      's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; //Малые латинские

    char s_glatin[]
            = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
               'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
               'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //Заглавные латинские

    char s_esc[]
            = {'!',
               '@',
               '#',
               '$',
               '%',
               '^',
               '&',
               '*',
               '(',
               ')',
               '-',
               '=',
               '+',
               '.',
               ',',
               ':',
               ';',
               '"',
               '?'}; //Специальные символы

    char s_dig[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    pswd = (char*)malloc(length * sizeof(char)); //Выделение памяти под пароль

    for (i = 0; i < length; i++) {
        pswd[i] = 0;
    }

    for (i = 0; i < length;
         i++) { // В этом цикле сначала заполняем пароль теми элементами,которые
                // требовал пользователь,затем случайными символами,не
                // противоречащими ключам введенным при запуске программы
        nrand = getrand(0, 100);

        if (countc1 != 0) {
            pswd[i] = s_glatin[rand() % 26];
            countc1 = 0;
        } else if (county1 != 0) {
            pswd[i] = s_esc[rand() % 19];
            county1 = 0;
        } else if (countn1 != 0) {
            pswd[i] = s_dig[rand() % 10];
            countn1 = 0;
        }

        else if ((nrand > 50 && nrand <= 75) && (countA1 == 0)) {
            pswd[i] = s_glatin[rand() % 26];
        } else if ((nrand > 25 && nrand <= 50)) {
            pswd[i] = s_esc[rand() % 19];
        }

        else if ((nrand <= 25) && (count01 == 0)) {
            pswd[i] = s_dig[rand() % 10];
        } else if (pswd[i] == 0) {
            pswd[i] = s_latin[rand() % 26];
        }
    }

    return pswd;
}
