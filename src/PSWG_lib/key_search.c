#include "func.h"

void key_search(char** argv, int argc)
{
    char* pswd;

    int z = 0;
    int u = 0;
    int g;
    int key_count = 0;

    for (int i = 1; i < argc; i++) { //Проходимся по всем введенным ключам
        g = strlen(argv[i]); //Считываем длину каждого из введенных ключей
        char* arr;
        arr = malloc((g + 1) * sizeof(char));
        strcpy(arr,
               argv[i]); //Копируем введенные ключи в массив arr,иного способа
                         //получить возможность обращаться к элементам ключа по
                         //их индексу я придумать не смог
        for (int j = 0; j < (g + 1);
             j++) { //Проходимся по каждому символу ключа, если это не длинна
                    //или кол-во паролей,то просто увеличиваем соответствующую
                    //переменную-счетчик на единицу,если  это N или l,то
                    //алгоритм описан ниже
            if (arr[j] == 'N') {
                while (z == 0) {
                    for (int v = 0; v < g;
                         v++) { //Проходимся по ключу,отсекая не числовые
                                //символы до тех пор,пока atoi не найдет
                                //число,являющееся длинной или количеством
                                //паролей соответственно
                        swap(&arr[v], &arr[v + 1]);
                        z = atoi(arr);
                    }
                }

                countN = z;
            }
            if (arr[j] == 'c') {
                countc = countc + 1;
                key_count++;
            }
            if (arr[j] == 'n') {
                countn = countn + 1;
                key_count++;
            }
            if (arr[j] == 'y') {
                county = county + 1;
                key_count++;
            }
            if (arr[j] == 'A') {
                countA = countA + 1;
                key_count++;
            }
            if (arr[j] == 'O') {
                count0 = count0 + 1;
                key_count++;
            }
            if (arr[j] == 'l') { // Тот же принцип что и в поиске кол-ва паролей

                while (u == 0) {
                    for (int v = 0; v < g; v++) {
                        swap(&arr[v], &arr[v + 1]);
                        u = atoi(arr);
                    }
                }

                length = u;
            }
        }
    }
    if_error(length, countc, countn, countA, count0, key_count);

    for (int i = 0; i < countN; i++) {
        pswd = gen_pswd(length, countc, countn, county, countA, count0);
        printf("%s\n", pswd);
        free(pswd);
    }
}
