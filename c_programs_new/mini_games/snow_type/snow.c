#include<stdio.h>
#include<stdlib.h> //system
#include<unistd.h> //sleep

int k = 3; //diminuir a varredura do tamanho do vetor na vertical, k tem que receber um reset para 3 a cada mudança de l
int l = 0; //Problema está no l! l tem que mudar para l+1 a cada mudança de coluna. 
int count = 11;

void print(char matrix_print[][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%c",matrix_print[i][j]);
        }

        printf("\n");
    }

    sleep(2);
    system("clear");
}


void matrix_input(char matrix_input[][3])
{
    for(int m = 0 ; m < k ; m++) // k = 1 ; preenche más não troca
    {
       for(int n = 0 ; n < k ; n++)
       {
        if(m == 0 && n == 0)
        {
            matrix_input[m][n] = '*';
        }

        else
        {
            matrix_input[m][n] = '/'; // Se for antes, ele vai preencher e depois substituir, ao invez de somente inserir o * (performance)
        }

       }
    }
}

void walk(char matrix_walking[][3])
{
    char change;

    for(int i = 0 ; i < (k-1) ; i++) //(k-1) exclui uma condição if, porque se i < k ; ex: sendo k = 3 ; [i+2] , com i == 2 , dara [3][0]. Estoura a matriz
    {
        change = matrix_walking[i+1][0];
        matrix_walking[i+1][0] = matrix_walking[i][0];
        matrix_walking[i][0] = change;

        print(matrix_walking);
        /*sleep(2);
        system("clear");*/
    }

}


int main(void)
{
    char matrix[3][3];

    system("clear");

    do
    {
        matrix_input(matrix);
        print(matrix);
        walk(matrix);

        k--;

    }while(k != 0 );
    
}

//Entende a lógica e depois substitui número por algebra
//Pense em uma coluna única na vertical