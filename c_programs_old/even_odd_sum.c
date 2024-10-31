/*-----------------------------------------------------------------------------------------------
->program name:even or odd
->objective:ferivy if the sum of two integer numbers is odd or even
->version:1.0
->release date:25/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
-----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int n1,n2,sum;

    printf("number:");
    scanf("%i",&n1);
    printf("number:");
    scanf("%i",&n2);

    sum = n1+n2;

    if(sum == 0)
    {
        printf("sum is not even nor odd \n");
        return 0;
    }

    if(sum % 2 == 0)
    {
        printf("the sum is odd:%i \n",sum);
        return 0;
    }

    else
    {
        printf("the sum is even:%i \n",sum);
    }
    
}