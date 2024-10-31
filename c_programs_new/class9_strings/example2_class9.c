#include<stdio.h>

int main(void)
{
    int matrix[2][2];

    for(int i = 0 ; i < 2 ; i++)
     for(int j = 0 ; j < 2 ; j++) //I didnt put {} because I only want the for to be executes, and not a block of code inside the for. Like in the case below
     {
        printf("integer:");
        scanf("%i",&matrix[i][j]);
     }

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("%i",matrix[i][j]);

        }

       printf("\n"); 
    }
    
}