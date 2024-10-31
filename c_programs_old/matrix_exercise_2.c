/*------------------------------------------------------------------------------------------------------------------
->program name:matrix_exercide_2
->objective:use a function to verify if an integer is even or odd
->version:1.0
->release date:03/04/23
->last update/date:03/04/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/


#include<stdio.h>

//Funções que tem seu escopo depois da main devem ser declaradas como uma "váriavel", int imprime_identidade; Dai escreve o escopo da função

int imprime_identidade(int matriz_identidade[100][100],int tamanho)
{
    for(int i = 0 ; i < tamanho ; i++)
    {
        for(int j = 0 ; j < tamanho ; j++)
        {
            printf("%i",matriz_identidade[i][j]);
        }
    
      printf("\n");

    }
}


int cria_identidade(int identidade[100][100],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i == j)
            {
                identidade[i][j] = 1;
            }

            else
            {
                identidade[i][j] = 0;
            }
        }
    }

   imprime_identidade(identidade,n); 

}


int main(void)
{
    /*coloquei os valores máximos da matriz porque eu não sei o valor de n, então ele vai ter que ir preenchendo as posições da matriz com 1 e 0 e o resto deixar
    "desocupado? Creio que ele preenche com null"*/
    int matrix[100][100];
    int number;

    printf("n_value:");
    scanf("%i",&number);

    cria_identidade(matrix,number);
}