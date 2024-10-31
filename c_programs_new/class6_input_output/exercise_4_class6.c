/*----------------------------------------------------------------------------------
objective: calculate the area and lenght of a circle
author: gabriel_taki
date: 11/09/23
----------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float radius, lenght, area;

    printf("radius:");
    scanf("%f",&radius);

    lenght = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("circle lenght:%f\n",lenght);
    printf("circle area:%f\n",area);

}