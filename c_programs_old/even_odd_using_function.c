/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_using_function
->objective:use a function to verify if an integer is even or odd
->version:1.0
->release date:01/04/23
->last update/date:01/04/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>


int verify(int n)
{
    if(n <= 0)
    {
        return 0;
    }

    else if (n%2 == 0)
    {
        printf("even:%i\n",n); //return 1 automatically? 
    }

    else
    {
        printf("odd:%i\n",n);
    }
}



int main (void)
{
    int number;

    do
    {

    printf("number:");
    scanf("%i",&number);

    verify(number);


    }while(number > 0);
}