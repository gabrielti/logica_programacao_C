#include<stdio.h>
#include<stdlib.h>

int position_x = 2;
int position_y = 2;

void print(char base[][5])
{
    for(int m = 0 ; m < 5 ; m++)
    {
        for(int n = 0 ; n < 5 ; n++)
        {
            printf("%c",base[m][n]);
        }

      printf("\n");
    }
}

int walk(char walking[][5])
{
    char old;

    if (getchar() == '\033') { // if the first value is esc
        getchar(); // skip the [

        switch(getchar()) { // the real value

            case 'A'://up
            old = walking[position_y][position_x];
            walking[position_y][position_x] = '*';
            position_y = position_y - 1 ;
            walking[position_y][position_x] = old;
                break;

            case 'B'://down
            old = walking[position_y][position_x];
            walking[position_y][position_x] = '*';
            position_y = position_y + 1 ;
            walking[position_y][position_x] = old;                
                break;

            case 'C'://right
            old = walking[position_y][position_x];
            walking[position_y][position_x] = '*';
            position_x = position_x + 1 ;
            walking[position_y][position_x] = old;               
                break;

            case 'D'://left
            old = walking[position_y][position_x];
            walking[position_y][position_x] = '*';
            position_x = position_x - 1 ;
            walking[position_y][position_x] = old;                
                break;
        }
    }

    system("clear");
    print(walking);

}

int main(void)
{
    char matrix[5][5];

    for(int i = 0 ; i < 5 ; i++)
        for(int j = 0 ; j < 5 ; j++)
        {
            if(i == 2 && j == 2)
            {
                matrix[i][j] = '@';
            }

            else if(i == 0 && j == 4)
            {
                matrix[i][j] = '!';
            }

            else
            {
                matrix[i][j] = '*';
            }

        }

    print(matrix);

    while(matrix[0][4] != '@')
    {
        if(position_x > 4 || position_y > 4)
        {
            printf("YOU LOSE!\n");
            return 0;
        }

        walk(matrix);
    }

    printf("YOU WIN!\n");

}

/*
    if (getchar() == '\033') { // if the first value is esc
        getchar(); // skip the [
            
        switch(getchar()) { // the real value
            case 'A':// code for arrow up
            
                break;
            case 'B':// code for arrow down
                
                break;
            case 'C':// code for arrow right
                
                break;
            case 'D':// code for arrow left
                
                break;
        }
    } entender mais sobre buffer do teclado e como funciona o input dos valores do teclado
*/