#include<stdio.h>

int main(void)
{
    float arithmeticmean;
    int grade,sum;
    int aux = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("grade:");
        scanf("%i",&grade);

        if(grade < 0 || grade > 10)
        {
            printf("invalid grade!\n");           
            return 0;
        }

        sum = grade+aux;
        aux = sum;
    }

    arithmeticmean = (float)sum/5; //casting

    printf("arithmetic mean:%f\n", arithmeticmean);

    if(arithmeticmean >= 7)
    {
        printf("student passed!\n");
    }

    else if(arithmeticmean >= 4 && arithmeticmean < 7)
    {
        printf("student will re-do de exam! \n");
    }

    else
    {
        printf("student flunked!\n");
    }
    
}