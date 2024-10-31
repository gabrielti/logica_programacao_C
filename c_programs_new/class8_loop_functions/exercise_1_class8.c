#include<stdio.h>

int main(void)
{
    //variable i only exists inside de for function
    for(int i = 1 ; i < 101 ; i++)
    {
        if(i%2 == 0)
        {
            printf("number %i is even\n",i);
        }

        else
        {
            printf("number %i is odd\n",i);
        }
    }
}