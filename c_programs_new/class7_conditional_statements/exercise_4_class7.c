#include<stdio.h>

int main(void)
{
    float a,b,c,biggest;

    printf("number:");
    scanf("%f",&a);
    printf("number:");
    scanf("%f",&b);
    printf("number:");
    scanf("%f",&c);

    if(a > b)
    {
        biggest = a;
    }

    else
    {
        biggest = b;
    }

    if(c > biggest)
    {
        biggest = c;
        printf("biggest number:%f\n",biggest);
    }

    else
    {
        printf("biggest number:%f\n",biggest);
    }


}