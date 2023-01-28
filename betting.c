#include <stdio.h>

/**
 * working on if and else statements
*/
int main(void){

    // Getting the age of a player
    int age;
    printf("PLease enter your age: ");
    scanf("%d", &age);

    // Checking if player is eligible to play

    if (age>= 18)
    {
        printf("You are Eligible to play");
        
    }else if (age <= 0)
    {
       printf("Please enter a valid age \n");

       do
       {
        printf("PLease enter your age: ");
         scanf("%d", &age);
       } while (age <= 0);
       
    }else
    {
         printf("This service is limited to persons 18 years and above \n");
           do
       {
        printf("PLease enter your age: ");
         scanf("%d", &age);
       } while (age < 18);    
    }
    
    
    return 0;
}