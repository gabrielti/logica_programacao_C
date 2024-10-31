#include<stdio.h>


int main(void)
{   
    int number1 , number2;

    printf("integer number:");
    scanf("%i",&number1);
    printf("integer number:");
    scanf("%i",&number2);
    
    printf("sum:%i\n", (number1+number2) );

    if( (number1+number2)%2 == 0)
    {  
        printf("the sum is and even number!\n");
    }

    else
    {
        printf("the sum is an odd number!\n");
    }


}