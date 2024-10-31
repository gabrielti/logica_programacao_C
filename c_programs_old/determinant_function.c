/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_using_function
->objective:use a function to verify if an integer is even or odd
->version:1.0
->release date:03/04/23
->last update/date:03/04/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

//global
float previous = 1;
float det = 1;

float determinante(float number)
{
    det = number*previous;
    previous = det;
}

int main (void)
{
    float matriz[2][2];

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("number:");
            scanf("%f",&matriz[i][j]);

            if (i == j)
            {
                determinante(matriz[i][j]);
            }
        }
    }

   printf("determinant:%f\n",det); 

}