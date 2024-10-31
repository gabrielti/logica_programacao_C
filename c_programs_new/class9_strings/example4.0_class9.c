#include<stdio.h>

int main(void)
{
    int number[4];
    int aux;

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("integer:");
        scanf("%i",&number[i]);
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        if(i + 1 == 4)
        {
            break;
        }
        
        if(number[i] > number[i+1])
        {
            aux = number[i+1];
            number[i+1] = number[i];
            number[i] = aux;
        }
    }

    for(int i = 3 ; i >= 0 ; i--)
    {
        if( (i-1) < 0)
        {
            break;
        }

        if(number[i - 1] > number[i])
        {
            aux = number[i];
            number[i] = number[i-1];
            number[i-1] = aux;
        }
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("%i ",number[i]);
    }

    printf("\n");
}