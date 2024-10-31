/*------------------------------------------------------------------------------------------------------------------
->program name:grade_verifier_2
->objective:ferivy if the student grade is enough to pass, checking if the grades are valid
->version:1.0
->release date:25/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int grade[5],sum;
    sum = 0;

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("grade(integer number):");
        scanf("%i",&grade[i]);

        if (grade[i] < 0 || grade[i] > 10)
        {
            printf("invalid grade! \n");
            return 0;
        }

       sum = sum+grade[i];

    }

    if ( (sum/5) < 4 )
    {
        printf("result:failed to pass the class \n");
    }

    else if ( (sum/5) >=4 && (sum/5) < 7)
    {
        printf("result:you need to do the final exam again \n");
    }

    else
    {
        printf("result:you passed! \n");
    }

}