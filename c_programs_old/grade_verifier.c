/*-----------------------------------------------------------------------------------------------
->program name:grade_verifier
->objective:ferivy if the student grade is enough to pass
->version:1.0
->release date:25/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
-----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    float grade;

    printf("grade:");
    scanf("%f",&grade);

    if(grade < 0 || grade > 100)
    {
        printf("invalid grade \n");
        return 0;
    }

    if(grade >= 0 && grade < 40)
    {
        printf("you flunked \n");
        return 0;
    }

    if(grade >= 40 && grade < 70)
    {
        printf("you will need to do the final test again \n");
        return 0;
    }

    else
    {
        printf("you are approved! \n");
    }
}