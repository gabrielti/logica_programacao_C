/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_using_function
->objective:use a function to verify if an integer is even or odd
->version:1.0
->release date:03/04/23
->last update/date:03/04/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>


int determinant_calculator(int determinant_matrix[][3])
{
    int det = 1;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(i == j)
            {
                det = det*determinant_matrix[i][j];
            }
        }
    }
  printf("determinant:%i\n",det);
}


int print_matrix(int printing_m[][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%i",printing_m[i][j]);
        }
      printf("\n");  
    }

   determinant_calculator(printing_m); 

}



int fulfill_matrix(int m[][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("number:");
            scanf("%i",&m[i][j]);
        }
    }

   printf("matrix format:\n"); 
   print_matrix(m); 
}



int main (void)
{
    int matrix[3][3]; //Matrix was created, memory was allocated do be fulfilled

    fulfill_matrix(matrix);
}