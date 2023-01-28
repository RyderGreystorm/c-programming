#include <stdio.h>


int *addNum(int *num1, int *num2, int *sum){
        *sum = *num1 + *num2;
        return sum;
}

int main(void)
{
    int a = 50;
    int b = 40;
    int sum;

    int *result = addNum(&a, &b, &sum);

    printf("The result is: %d", result);
 
    return 0;
}