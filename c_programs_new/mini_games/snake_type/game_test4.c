#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int position_x = 9;
int position_y = 9;
int randomnumber1;
int randomnumber2;
int randomnumber3;
int randomnumber4;

void print(char base[][19])
{
    for(int m = 0 ; m < 19 ; m++)
    {
        for(int n = 0 ; n < 19 ; n++)
        {
            printf("%c",base[m][n]);
        }

      printf("\n");
    }
}

int walk(char walking[][19])
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

    //count++; 4 da seta + 3 do enter = 7

    system("clear");
    print(walking);

}

int main(void)
{
    char matrix[19][19];
    time_t clock;

    srand((unsigned)time(&clock));

    for(int count = 0 ; count < 1 ; count++)
    {  
        randomnumber1 = (rand() % 17)-1;
        randomnumber2 = (rand() % 17)-1;
        randomnumber3 = (rand() % 17)-1;
        randomnumber4 = (rand() % 17)-1;

        if(randomnumber1 == 9 && randomnumber2 == 9)
        {
            while (randomnumber1 == 9 && randomnumber2 == 9)
            {
                randomnumber1 = (rand() % 17)-1; // O problema é a linha 
                randomnumber2 = (rand() % 17)-1; // O problema é a coluna
            }
            
        }

        if(randomnumber3 == randomnumber1 && randomnumber4 == randomnumber2)
        {
            while (randomnumber3 == randomnumber1 && randomnumber4 == randomnumber2) //diferente da posição de !
            {
                randomnumber3 = (rand() % 17)-1;
                randomnumber4 = (rand() % 17)-1;

                if(randomnumber3 == 9 && randomnumber4 == 9) //diferente da posição de @
                {
                    randomnumber3 = (rand() % 17)-1;
                    randomnumber4 = (rand() % 17)-1;
                }
            }
            
        }

    }


    system("clear");

    for(int i = 0 ; i < 19 ; i++)
        for(int j = 0 ; j < 19 ; j++)
        {
            if(i == 9 && j == 9)
            {
                matrix[i][j] = '@';
            }

            else if(i == 0 || i == 18 )
            {
                matrix[i][j] = '#';
            }

            else if(j == 0 || j == 18)
            {
                matrix[i][j] = '#';
            }

            else if(i == randomnumber1 && j == randomnumber2)
            {
                matrix[i][j] = '!';
            }

            else if(i == randomnumber3 && j == randomnumber4)
            {
                matrix[i][j] = 'X';
            }
            
            else
            {
                matrix[i][j] = '*';
            }

        }

    print(matrix);

    while(matrix[randomnumber1][randomnumber2] != '@')
    {
        for(int i = 0 ; i < 19 ; i++)
            for(int j = 0 ; j < 19 ; j++)
            {

                if(i == 0 || i == 18)
                {
                    if(matrix[i][j] != '#')
                    {
                        printf("-------YOU LOSE!-------\n");
                        return 0;
                    }
                }

                if(j == 0 || j == 18)
                {
                    if(matrix[i][j] != '#')
                    {
                        printf("-------YOU LOSE!-------\n");
                        return 0;
                    }
                }

                if(position_y == randomnumber3 && position_x == randomnumber4)
                {
                    matrix[position_y][position_x] = 'X';
                    system("clear");
                    print(matrix);
                    printf("--------YOU LOSE!--------\n");
                    return 0;
                }

            }
        walk(matrix);
    }
    
    printf("-------YOU WIN!-------\n");
    printf("r1:%i r2:%i\n",randomnumber1,randomnumber2);

}

//diferente da posição de @, há diferença entre posititon_y == random e random == position_y. Por causa do tempo, ordem de execução em que cada um se modifica!
