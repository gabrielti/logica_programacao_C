#include<stdio.h>

int main(void)
{
    float matrix[3][3];

    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("number:");
            scanf("%f",&matrix[i][j]);
        }

    printf("---------------------------------\n");

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
            printf("%f  ",matrix[i][j]);
        }

      printf("\n");  

    }

    printf("---------------------------------\n");


    for(int j = 0 ; j < 3 ; j++)
    {
        for(int i = 0 ; i < 3 ;i++)
        {
            printf("%f  ",matrix[i][j]);
        }

      printf("\n");  

    }

}