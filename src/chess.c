#include <stdio.h>

struct
{
        int Ox;//Координата фигуры по оси х
        int Oy;//Координата фигуры по оси у

}typedef coordinate;




struct
{
    char name;
    coordinate coord;
}typedef figure;






    void createDesk ()
    {
        figure desk[8][8] = {
                           {{'r',},{'n',},{'b',},{'q',},{'k',},{'b',},{'n',},{'r',}},
                           {{'p',},{'p',},{'p',},{'p',},{'p',},{'p',},{'p',},{'p',}},
                           {{'e',},{'e',},{'e',},{'e',},{'e',},{'e',},{'e',},{'e',}},
                           {{'e',},{'e',},{'0',},{'e',},{'e',},{'e',},{'e',},{'e',}},
                           {{'e',},{'e',},{'0',},{'e',},{'e',},{'e',},{'e',},{'e',}},
                           {{'e',},{'e',},{'0',},{'e',},{'e',},{'e',},{'e',},{'e',}},
                           {{'P',},{'P',},{'P',},{'P',},{'P',},{'P',},{'P',},{'P',}},
                           {{'R',},{'N',},{'B',},{'Q',},{'K',},{'B',},{'N',},{'R',}}
                            };
            for (int i=0 ; i<8;i++)
            {
                for (int j=0 ; j<8 ; j++)
                {
                desk[i][j].coord.Ox = i;
                desk [i][j].coord.Oy = j;
                }
            }
            for (int i=0 ; i<8;i++)
            {
                printf("\t\n");
                for (int j=0 ; j<8 ; j++)
                {
                printf("\t %3c",desk[i][j].name);
                }
            }

    }
	int main() {
    createDesk();
    printf("\n");
    return 0;
    }
