/*----------------------------------------------------------------
objective: calculate the sum and subtraction of two integers
author: gabriel_taki
date: 08/09/23
--------------------------------------------------------------- */


#include<stdio.h>

int main(void)
{
    int number1 , number2;

    printf("integer number:");
    scanf("%i",&number1);
    printf("integer number:");
    scanf("%i",&number2);

    printf("sum:%i\n",number1+number2);
    printf("subtraction:%i\n",number1-number2);

    return 0;
}