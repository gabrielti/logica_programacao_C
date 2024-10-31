/*------------------------------------------------------------------------------------------------------------------------
->program name:3x3_matrix_transpose
->objective:build the transpose from a 3x3 integer matrix input 
->version:1.0
->release date:30/03/23
->last update/date:30/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int matrix[3][3];
    int transpose[3][3];

    // i = line , j = columm
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            printf("number:");
            scanf("%i",&matrix[i][j]);
        }
    }

    printf("\n");

    //tranpose
    for (int j = 0 ; j < 3 ; j++)
    {
        for (int i = 0 ; i < 3 ; i++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    //output
    printf("\n");

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            printf("%i",matrix[i][j]);
        }
      printf("\n"); 
    }

    printf("\n");

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            printf("%i",transpose[i][j]);
        }
      printf("\n");  
    }
}