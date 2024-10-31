
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char next;


//Vou ter que separar em 4 funçoes, direita, desce, esquerda e sobe

void print(char print_matrix[][5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            printf("%c",print_matrix[i][j]);
        }

      printf("\n");
    }

    sleep(1);
    printf("\a");
    system("clear");
}

int cima(char matrix_walk_up[][5])
{
    for(int i = 4 ; i > 0 ; i--)
    {
        next = matrix_walk_up[i-1][0];
        matrix_walk_up[i-1][0] = matrix_walk_up[i][0];
        matrix_walk_up[i][0] = next;

        print(matrix_walk_up);
    }
}

void esquerda(char matrix_walk_esquerda[][5])
{
    for(int i = 4 ; i >= 0 ; i--)
    {
        if( i-1 < 0)
        {
            cima(matrix_walk_esquerda);
        }
        next = matrix_walk_esquerda[4][i-1];
        matrix_walk_esquerda[4][i-1] = matrix_walk_esquerda[4][i];
        matrix_walk_esquerda[4][i] = next;

        print(matrix_walk_esquerda); 
    }

}

void baixo(char matrix_walk_baixo[][5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        if(i+1 == 5) // O problema estava aqui, se essa função vier após a troca, vai dar overflow(Vai invadir outros espaçoes de memória, porque i+1 será 5)
        {
            esquerda(matrix_walk_baixo);
        }

        next = matrix_walk_baixo[i+1][4];
        matrix_walk_baixo[i+1][4] = matrix_walk_baixo[i][4];
        matrix_walk_baixo[i][4] = next;

        print(matrix_walk_baixo);
    }

}

int direita(char matrix_walk_direita[][5])
{
    for(int m = 0 ; m < 5 ; m++) // funcao direita
    {
        for(int n = 0 ; n < 5 ; n++)
        {

            if(n+1 == 5)
            {
                return 1; //baixo(matrix_walk_direita);
            }

            next = matrix_walk_direita[m][n+1];
            matrix_walk_direita[m][n+1] = matrix_walk_direita[m][n];
            matrix_walk_direita[m][n] = next;

            print(matrix_walk_direita);
        }

    }
}

int main(void)
{
    char matrix[5][5];

    for(int i = 0 ; i < 5 ; i++) //preenchendo a matriz
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(i == 0 && j == 0)
            {
                matrix[i][j] = '*';
            }

            else if (j == 0 || j == 4)
            {
                matrix[i][j] = '#';
            }

            else if(i == 0 || i == 4)
            {
                matrix[i][j] ='#';
            }

            else
            {
                matrix[i][j] = ' ';
            }
            
        }
    }

    system("clear");

    print(matrix);
    direita(matrix);
    baixo(matrix);

    return 0;

}
