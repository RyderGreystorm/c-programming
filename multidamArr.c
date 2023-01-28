#include <stdio.h>


int main(){

    int chess[4][5] = {

        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},

    };

    //Getting index and values

    int row = sizeof(chess)/sizeof(chess[0]);
    int column = sizeof(chess[0])/sizeof(chess[0][0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", chess[i][j]);
        }
        printf("\n");
    }
    







    return 0;
}