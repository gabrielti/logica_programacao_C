/*------------------------------------------------------------------------------------------------------------------
->program name:2x2_matrix_basics
->objective:work with an bidimensional vector to store simple integer numbers and print them after
->version:1.0
->release date:29/03/23
->last update/date:29/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float matrix[2][2];

    for (int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("number:");
            scanf("%f",&matrix[i][j]);
        }
    }

    printf("\n");

    for (int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("%f   ",matrix[i][j]);
        }
      printf("\n\n");
    }
}