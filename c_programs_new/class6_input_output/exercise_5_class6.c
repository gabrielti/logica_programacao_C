/*----------------------------------------------------------------------------------
objective: multiplication table
author: gabriel_taki
date: 11/09/23
----------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int number;

    printf("number(1-9):");
    scanf("%i",&number);

    for(int i = 1 ; i < 11 ;i++)
    {
        printf("%i * %i = %i\n", number, i , number*i);
    }

    return 0;
}