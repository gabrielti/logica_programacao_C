/*------------------------------------------------------------------------------------------------------------------
->program name:vector_basics
->objective:work with an unidimensional vector to store simple integer numbers and print them after
->version:1.0
->release date:29/03/23
->last update/date:29/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main (void)
{
    int vector_number[5];

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("number:");
        scanf("%i",&vector_number[i]);
    }

    for (int j = 0 ; j < 5 ; j++)
    {
        printf("number typed:%i \n",vector_number[j]);
    }
}