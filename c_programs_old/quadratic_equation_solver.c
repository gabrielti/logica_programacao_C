/*-----------------------------------------------------------------------------------------------
->program name:quadratic_equation_solver
->objective:find the roots of an quadratic equation input, complex numbers roots are not included
->version:1.0
->release date:24/03/23
->last update/date:24/03/23
->developer name:gabriel_taki
-----------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c,delta,root_1,root_2;

    printf("quadratic_equation_format: ax²+bx+c = 0 \n");
    printf("a_value(should not be zero):");
    scanf("%f",&a);

    if(a == 0)
    {
        printf("invalid input! \n");
        return 0;
    }

    printf("b_value:");
    scanf("%f",&b);
    printf("c_value:");
    scanf("%f",&c);

    delta = (b*b) - 4*a*c;

    if(delta < 0)
    {
        printf("the roots are in the complex domain \n");
      return 0;
    }

    if(delta == 0)
    {
        root_1 = (-1*b)/(2*a);
        root_2 = root_1;

        printf("the roots are equal \n");
        printf("roots:%f \n",root_1);
;
      return 0;
    }

    if(delta > 0)
    {
        root_1 = ((-1*b)+sqrt(delta))/(2*a);
        root_2 = ((-1*b)-sqrt(delta))/(2*a);

        printf("two different roots \n");
        printf("root_1:%f \n",root_1);
        printf("root_2:%f \n",root_2);

       return 0; 

    }

}