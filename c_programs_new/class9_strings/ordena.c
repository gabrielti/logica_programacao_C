#include<stdio.h>

int main(void)
{
    float number[10];
    float aux;
    int j = 0;

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("integer:");
        scanf("%f",&number[i]);
    }
    
    for(int n = 10 ; n >=0 ; n--)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(i + 1 == n)
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

    }

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%f ",number[i]);
    }

    printf("\n");
}