/*-----------------------------------------------------------------------------------------------
->program name:weighted_average_calculator 
->objective:calculate the weighted average between 5 numbers
->version:1.0
->release date:25/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
-----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float n,w,average_weight;
    float sum = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("number:");
        scanf("%f",&n);
        printf("weight:");
        scanf("%f",&w);

        sum = sum + n*w;
    }
    
    average_weight = sum/5;

    printf("the average_weight is:%f \n",average_weight);
}