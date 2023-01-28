#include <stdio.h>

//sum of all natural numbers

int sum(int n);

int main(){
    int number, reslt;

    printf("Please enter a postive number: ");
    scanf("%d", &number);

    reslt = sum(number);

    printf("Sum = %d", reslt);

    return 0;
}



int sum(int n){
    if (n != 0)
    {
        return n + sum(n - 1);
    }else{
        return n;
    }
    
}