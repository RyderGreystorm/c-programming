#include <stdio.h>

int main(){

    // int age = 50;
    // printf("Age is %d \n", age);
    // printf("Address is %p \n", &age) ; //Printing the address of age

    // int *ptr_age = &age;  //we are using pointer to store the adress of age

    // printf("The value of the pointer is %p \n", ptr_age); //The value of the pointer
    // printf("Value store at ptr_age is: %d\n", ptr_age);

    int age[] = {25, 68, 85, 12, 45, 56, 69};

        *age = 20;
        *(age + 2) = 24;

        for (int i = 0; i < sizeof(age)/sizeof(age[0]) ; i++)
        {
            printf("%d = %p\n", age[i], &age[i]);
        }
        

    return (0);
}