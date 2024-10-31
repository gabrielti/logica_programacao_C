/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_number_integer_verifyer
->objective:verify if the integer number between 0 and 100 is even or odd
->version:1.0
->release date:27/03/23
->last update/date:27/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    for(int i = 0 ; i < 101; i++)
    {

        if( i == 0)
        {
            printf("number:%i is not even nor odd\n",i);
        }

        else if( i%2 == 0)
        {
            printf("number:%i is even\n",i);
        }

        else
        {
            printf("number:%i is odd\n",i);
        }
    }    
}