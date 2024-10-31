/*----------------------------------------------------------------------------------
objective: calculate the weight avarege between 5 numbers
author: gabriel_taki
date: 12/09/23
----------------------------------------------------------------------------------*/
#include<stdio.h>

int main(void)
{
    float sum, sumweight, auxsumnumber,auxsumweight,weight,number;

    auxsumnumber = 0;
    auxsumweight = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("number:");
        scanf("%f",&number);
        printf("weight:");
        scanf("%f",&weight);

        sum = auxsumnumber + number*weight;
        auxsumnumber= sum;

        sumweight = auxsumweight + weight;
        auxsumweight = sumweight;
    }

    printf("\nsum:%f\n",sum);
    printf("weight sum:%f\n",sumweight);
    printf("weight avarege:%f\n",sum/sumweight);

}