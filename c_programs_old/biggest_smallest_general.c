/*------------------------------------------------------------------------------------------------------------------
->program name:biggest_smallest_comparison_and_arithmetic_mean_calculator
->objective:show the biggest and the smallest number and calculate the arithmetic mean between the input numbers.
if the user types a negative number, the program will end.
->version:1.0
->release date:28/03/23
->last update/date:28/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float n1,n2,n3,biggest,smallest,sum,count;
    count = 2;

    printf("number(positive):");
    scanf("%f",&n1);
    if(n1 < 0)
    {
        printf("invalid combination!\n");
        return 0;
    }
    
    printf("number(positive):");
    scanf("%f",&n2);
    if(n2 < 0)
    {
        printf("invalid combination! \n");
        return 0;
    }

    if(n1 > n2)
    {
        biggest = n1;
        smallest = n2;
    }

    else
    {
        biggest = n2;
        smallest = n1;
    }

    sum = biggest+smallest;

    do
    {

        printf("number(negative_ends_operation):");
        scanf("%f",&n3);

        if(n3 < 0)
        {
            printf("biggest:%f \n",biggest);
            printf("smallest:%f \n",smallest);
            printf("arithmetic_mean:%f \n",sum/count);
            return 0;
        }

        if(n3 >= biggest)
        {
            biggest = n3;
        }

        if(n3 <= smallest)
        {
            smallest = n3;
        }

        sum = sum + n3;
        count++;

    } while (n3 > 0);

    printf("biggest:%f \n",biggest);
    printf("smallest:%f \n",smallest);
    printf("arithmetic_mean:%f \n",sum/count);
    
}