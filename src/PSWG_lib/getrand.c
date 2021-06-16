#include "func.h"

int getrand(int min, int max) // Функция возвращает случайное число из диапазона
                              // от min до max
{
    return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}
