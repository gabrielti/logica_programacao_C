#include<stdio.h>

void imprime_matriz(int matriz_identidade[][100],int count)
{
    for(int i = 0 ; i < count ; i++)
    {
        for(int j = 0 ; j < count ; j++)
        {
            printf("%i",matriz_identidade[i][j]);
        }
      printf("\n");  
    }
}

void cria_matriz_identidade(int identidade[][100],int n)
{
    for(int i = 0 ; i < n ; i++)
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

    imprime_matriz(identidade,n);    
}


int main(void)
{
    int number;
    int matrix[100][100];

    do
    {
        printf("integer:");
        scanf("%i",&number);
     
    } while(number < 1 || number > 100);
    
        cria_matriz_identidade(matrix,number);
        
}