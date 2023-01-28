#include <stdio.h>

int main(){
    int num;
    int *ptr1;
    int **ptr2;

    num = 700;
    ptr1 = &num;
    ptr2 = &ptr1;

    // assessing the value of num
    printf("The value of num is: %d\n", num);
    printf("The value of  num using prt1 is: %d\n", *ptr1);
    printf("The value of num using prt2 is: %d\n", **ptr2);

    //addresing the address of num
    printf("The address of num using: %p \n", &num);
    printf("The address of num ptr1: %p \n", ptr1);
    printf("The address of num ptr2: %p \n", *ptr2);




    return 0;
}