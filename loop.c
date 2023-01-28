#include <stdio.h>

int main (void){

// For loops
for (int i = 0; i <= 10; i++)
{
    printf("Hello My friend \n");
    for (int j = 0; j < 5; j++)
    {
        printf("Inner LOOP completed %d \n", j);
    }
    printf("End of outer loop %d\n", i);
    
}

for (int j = 0; j <= 20; j++)
{
   printf("Number %d \n", j);
}



//While loop


int m = 1;

while (m <= 20)
{
    printf("This is number: %d \n", m);
    m++;
}


    return 0;
}






