#include <stdio.h>

int main(){

    char name[100];
    printf("Please input your characters: ");
    fgets(name, 100, stdin);
    printf("This is your value: %s \n", name);
    puts(name);

    return 0;
}