#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void print(char walking[])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%c",walking[i]);
    }

    sleep(3);
    system("clear");
}


int walk(char base[])
{
    char next;

    for(int i = 0 ; i < 5 ;i++)
    {
        if(i+1 == 5)
        {
            return 0;
        }

        next = base[i+1];
        base[i+1] = base[i];
        base[i] = next;
        print(base);
    }
} //Ele esta imprimindo as 5 posições, por isso o espaço entre os *


int main(void)
{
    system("clear");

    char matrix[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        if(i == 0)
        {
            matrix[i] = '*';
        }

        else
        {
            matrix[i] = '@';
        }
    }

    print(matrix);
    walk(matrix);
    printf("\n");
}
