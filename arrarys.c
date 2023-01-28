#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

// int age[] = {25, 68, 85, 12, 45, 56, 69};
//   age[7] = 40;
//   age[8] = 80;
//   age[0] = 30;
//   age[1] = 32;

//  for (int i = 0; i < sizeof(age)/sizeof(age[i]); i++)
//  {
//     printf("%d\t", age[i]);
//  }
 
 //MULTI DIMENTIONAL ARRAYS

        int age[2][3] = {{1, 2, 3}, {4, 5, 6}};
        age[0][1];
        age[1][1];

        age[0][2] = 34;
        age[1][2] = 90;

        int row = sizeof(age)/sizeof(age[0]);
        int column = sizeof(age[0])/sizeof(age[0][0]);


        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d\t", age[i][j]);
            }
            printf("\n");
        }
        










    // char name[50] = "GODBLESS";
    // strupr(name);

    // printf("%s", name);

    return (0);
}