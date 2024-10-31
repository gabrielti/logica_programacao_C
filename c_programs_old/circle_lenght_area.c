/*------------------------------------------------------------------------
->program name:circle_math
->objective:calculate the circle lenght and its area 
->version:1.0
->release date:24/03/23
->last update/date:24/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------*/


#include<stdio.h>
#define pi 3.14159

int main(void)
{
    float radius;

    printf("radius:");
    scanf("%f",&radius);

    printf("circle lenght:%f \n",2*pi*radius);
    printf("circle area:%f \n",pi*radius*radius);

}
