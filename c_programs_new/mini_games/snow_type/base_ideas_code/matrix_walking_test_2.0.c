
#include<stdio.h>
#include<unistd.h> //sleep
#include<stdlib.h> //system

char next;


//Vou ter que separar em 4 funçoes, direita, desce, esquerda e sobe
//O problema do matrix_walking_test é que na ultima função print, ele nao volta para main, ele fica em loop infinito. Ainda nao sei direito porque, mais creio que
//seja por conta do modo do design das função, na função print ele nao vai retornar para main, ele provavelmente retorna para funcao cima, que fica em loop com print
//Nunca volta para main

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

int up(char matrix_walk_up[][5])
{
    for(int i = 4 ; i > 0 ; i--)
    {
        if(i-1 == 0)
        {
            return 1;
        }

        next = matrix_walk_up[i-1][0];
        matrix_walk_up[i-1][0] = matrix_walk_up[i][0];
        matrix_walk_up[i][0] = next;

        print(matrix_walk_up);
    }
}

int left(char matrix_walk_left[][5])
{
    for(int i = 4 ; i >= 0 ; i--)
    {
        if( i-1 < 0)
        {
            return 1;
        }
        next = matrix_walk_left[4][i-1];
        matrix_walk_left[4][i-1] = matrix_walk_left[4][i];
        matrix_walk_left[4][i] = next;

        print(matrix_walk_left); 
    }

}

int down(char matrix_walk_down[][5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        if(i+1 == 5) // O problema estava aqui, se essa função vier após a troca, vai dar overflow(Vai invadir outros espaçoes de memória, porque i+1 será 5)
        {
            return 1;
        }

        next = matrix_walk_down[i+1][4];
        matrix_walk_down[i+1][4] = matrix_walk_down[i][4];
        matrix_walk_down[i][4] = next;

        print(matrix_walk_down);
    }

}

int right(char matrix_walk_right[][5])
{
    for(int m = 0 ; m < 5 ; m++) // funcao direita
    {
        for(int n = 0 ; n < 5 ; n++)
        {

            if(n+1 == 5)
            {
                return 1; //baixo(matrix_walk_direita);
            }

            next = matrix_walk_right[m][n+1];
            matrix_walk_right[m][n+1] = matrix_walk_right[m][n];
            matrix_walk_right[m][n] = next;

            print(matrix_walk_right);
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

    right(matrix);
    down(matrix);
    left(matrix);
    up(matrix);

    printf("WIN!\n");

    return 0;

}
