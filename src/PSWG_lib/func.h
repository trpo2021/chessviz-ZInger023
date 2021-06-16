#ifndef FUNC_C
#define FUNC_C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int countN; //Число паролей
int countc; //Будет включена хотя бы одна заглавная буква
int countn; //В пароле будет хотя бы одно число
int county; //Будет включен хотя бы один спец символ
int countA; //Заглавные не будут включены
int count0; //Числа не будут включены
int length; //Длина пароля

int getrand(int min, int max);
char* gen_pswd(
        int length,
        int countc1,
        int countn1,
        int county1,
        int countA1,
        int count01);
int if_error(
        int length,
        int countc,
        int countn,
        int countA,
        int count0,
        int key_count);
void swap(char* a, char* b);
void key_search(char** argv, int argc);

#endif
