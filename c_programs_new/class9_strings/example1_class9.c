#include<stdio.h>

int main(void)
{
    int numbers[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("integer number:");
        scanf("%i",&numbers[i]);
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("numbers[%i] = %i\n", i , numbers[i]);
    }

    //position in the vector (sting = conjunto de caracteres)
}