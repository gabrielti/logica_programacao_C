/*----------------------------------------------------------------------------------
objective: 2 degree polinomial equation solver
author: gabriel_taki
date: 11/09/23
----------------------------------------------------------------------------------*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c,delta,root1,root2;

    printf("format: ax^2+bx+c (where a is different than 0) \n");
    printf("a:");
    scanf("%f",&a);
    printf("b:");
    scanf("%f",&b);
    printf("c:");
    scanf("%f",&c);

    delta = (b*b)-4*a*c;
    
    printf("delta:%f\n",delta);

    if(delta < 0)
    {
        printf("solution not in the real numbers domain\n");
        return 0;
    }

    if(delta == 0)
    {
        root1 = (-1*b)/(2*a);
        printf("two equal roots:%f\n",root1);
        return 0;
    }

    else
    {
        root1 = (-1*b+sqrt(delta)) / (2*a);
        root2 = (-1*b-sqrt(delta)) / (2*a);

        printf("first root:%f\n",root1);
        printf("second root:%f\n",root2);
    }


}