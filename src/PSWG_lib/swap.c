#include "func.h"

void swap(char* a, char* b) //Простая функция, меняющая местами два
                            //объекта,пояснять особо нечего
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
