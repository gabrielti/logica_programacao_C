/*----------------------------------------------------------------------------------
objective: calculate the sum, subtraction and the square root of two integers
author: gabriel_taki
date: 08/09/23
----------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int number1 , number2;
    float sqrnumber1 , sqrnumber2;

    printf("integer number:");
    scanf("%i",&number1);
    printf("integer number:");
    scanf("%i",&number2);

    sqrnumber1 = sqrt(number1);
    sqrnumber2 = sqrt(number2);

    printf("sum:%i\n",number1+number2);
    printf("subtraction:%i\n",number1-number2);
    printf("square_root:%f\n",sqrnumber1);
    printf("square_root:%f\n",sqrnumber2);

    return 0;
}