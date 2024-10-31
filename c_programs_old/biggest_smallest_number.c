/*------------------------------------------------------------------------------------------------------------------
->program name:biggest_smallest_number(ordena)
->objective:compare the value of 3 numbers and determ which one is the biggest and which one is the smallest number
->version:1.0
->release date:25/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float n[3],maior,menor;

    for (int i = 0 ; i < 3 ; i++)
    {
        printf("number:");
        scanf("%f",&n[i]);
    }

    //condition_1
    if (n[0] > n[1])
    {
        maior = n[0];
        menor = n[1];
    }

    else
    {
        maior = n[1];
        menor = n[0];
    }

    //condition_2
    if (maior > n[2])
    {
        maior = maior;
    }

    else
    {
        maior = n[2];
    }

    //condition_3
    if (n[2] > menor)
    {
        printf("biggest number:%f \n",maior);
        printf("mallest number:%f \n",menor);
    }

    else
    {   
        printf("biggest number:%f \n",maior);
        printf("smallest number:%f \n",n[2]);
    }
    

}
