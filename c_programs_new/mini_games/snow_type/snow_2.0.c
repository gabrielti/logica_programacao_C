/*------------------------------------------------------
program name: snow
objective: simulate snowfalling effect in the screen
autor: gabriel_taki
date: 09/10/23
-------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h> //system
#include<unistd.h> //sleep

int k = 6; //diminuir a varredura do tamanho do vetor na vertical, k tem que receber um reset para 3 a cada mudança de l (coluna)
int l = 0; //Problema está no l! l tem que mudar para l+1 a cada mudança de coluna. l é respectivo a posição da coluna



void print(char matrix_print[][6])
{
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j = 0 ; j < 6 ; j++)
        {
            printf("%c",matrix_print[i][j]);
        }

        printf("\n");
    }

    sleep(1);
    system("clear");
}


void matrix_input(char matrix_input[][6]) //fullfil matrix
{
    for(int m = 0 ; m < k ; m++) // k = 1 ; preenche más não troca
    {
        if(m == 0)
        {
            matrix_input[m][l] = '*';
        }

        else
        {
            matrix_input[m][l] = ' '; // Se for antes, ele vai preencher e depois substituir, ao invez de somente inserir o * (performance)
        }
    }
}

void walk(char matrix_walking[][6]) //change char positions
{
    char change;

    for(int i = 0 ; i < (k-1) ; i++) //(k-1) exclui uma condição if, porque se i < k ; ex: sendo k = 3 ; [i+2] , com i == 2 , dara [3][0]. Estoura a matriz
    {
        change = matrix_walking[i+1][l];
        matrix_walking[i+1][l] = matrix_walking[i][0];
        matrix_walking[i][l] = change;

        print(matrix_walking);
        /*sleep(2);
        system("clear");*/
    }

}

void loop(char matrix_loop[][6]) //loop process to fullfil all the matrix positions using the snow effect
{
    do
    {
    
        matrix_input(matrix_loop);
        print(matrix_loop);
        walk(matrix_loop);

        k--; 

    } while (k != 0); 
}

void reset(void) // reset l and k values
{
    l++;
    k = 6;
}

int main(void) // program beggin
{
    char matrix[6][6];

    system("clear");

    for(int i = 0 ; i < 5 ; i++)
    {
        loop(matrix);
        reset();
    }

    loop(matrix);

}

//Entende a lógica e depois substitui número por algebra
//Pense em uma coluna única na vertical
//Eu fiquei escrevendo loop reset, loop reset... Até encontrar o padrão de que esse bloco em sí é um loop