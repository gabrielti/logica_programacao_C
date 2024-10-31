/*------------------------------------------------------------------------------------------------------------------
->program name:age filter
->objective:count the amount of persons that hava a specific age in the range of 0 to 66+
->version:1.0
->release date:26/03/23
->last update/date:25/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int person_age[10];
    int range_1,range_2,range_3,range_4,range_5,range_6;

    range_1 = 0;
    range_2 = 0;
    range_3 = 0;
    range_4 = 0;
    range_5 = 0;
    range_6 = 0;

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("age:");
        scanf("%i",&person_age[i]);

        if(person_age[i] >= 0 && person_age[i] <=15  )
        {
            range_1 = range_1 + 1;
        }
        
        else if(person_age[i] >= 16 && person_age[i] <=18  )
        {
            range_2 = range_2 + 1;
        }

        else if(person_age[i] >= 18 && person_age[i] <=23  )
        {
            range_3 = range_3 + 1;
        }

        else if(person_age[i] >= 24 && person_age[i] <=60  )
        {
            range_4 = range_4 + 1;
        }

        else if(person_age[i] >= 61 && person_age[i] <=65  )
        {
            range_5 = range_5 + 1;
        }

        else
        {
            range_6 = range_6 + 1;
        }
    }

        printf("range_1:%i\n",range_1);
        printf("range_2:%i\n",range_2);
        printf("range_3:%i\n",range_3);
        printf("range_4:%i\n",range_4);
        printf("range_5:%i\n",range_5);
        printf("range_6:%i\n",range_6);
}