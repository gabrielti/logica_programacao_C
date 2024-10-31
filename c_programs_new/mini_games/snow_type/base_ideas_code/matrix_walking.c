#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(void)
{
    char next;
    char matrix[20];

    system("clear");

    for(int i = 0 ; i < 20 ; i++)
    {
        if(i == 0)
        {
            matrix[i] = '*';
        }

        else
        {
            matrix[i] = '#';
        }
    }

    for(int l = 0 ; l < 20 ; l++)
    {
        printf("%c",matrix[l]);
    }

    printf("\n");
    sleep(1);
    printf("\a");
    system("clear");

    for(int j = 0 ; j < 20; j ++)
    {
        if(j+1 == 20)
        {
            return 0;
        }

        next = matrix[j+1];
        matrix[j+1] = matrix[j];
        matrix[j] = next;

        for(int k = 0 ; k < 20 ; k++)
        {
            printf("%c",matrix[k]);
        }

        printf("\n");
        sleep(1);
        printf("\a");
        system("clear");
    }

    printf("\n");
}