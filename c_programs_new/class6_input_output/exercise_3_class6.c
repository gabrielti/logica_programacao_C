/*----------------------------------------------------------------------------------
objective: calculate the sum, subtraction and the square root of two integers
author: gabriel_taki
date: 08/09/23
----------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int aux = 0;
    int number,sum;
    float arithmetic_mean;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("integer:");
        scanf("%i",&number);
        sum = number+aux;
        aux = sum;
    }

    arithmetic_mean = ((float)sum)/5 ;

    printf("arithmetic_mean:%f\n",arithmetic_mean);
    
}