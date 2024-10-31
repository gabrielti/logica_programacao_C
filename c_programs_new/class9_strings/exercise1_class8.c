#include<stdio.h>

int main(void)
{
    int number[10];

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("integer:");
        scanf("%i",&number[i]);
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        if(i != 0 && i%2 == 0)
        {
            printf("array position:%i  content:%i\n",i,number[i]);
        }
    }

}