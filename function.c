#include <stdio.h>

//Global variables
int g = 20;
// void greeting(){
//     printf("Hello chief \n");
// }

// void numberSquare(int number){
//     int results = number *  number;
//     printf("The square of %d is %d", number, results);
// }

   int addNum(int num1, int num2);
     


int main(){

    // greeting();
    // numberSquare(9);
    int addIn = addNum(25,85);
    printf("the result is %d ", addIn );
    return 0;
}

 int addNum(int num1, int num2){
        int result = num1 + num2;
        return result;
    }
