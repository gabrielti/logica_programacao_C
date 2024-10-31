/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_number_integer_verifyer
->objective:verify if the integer number between 0 and 100 is even or odd
->version:1.0
->release date:27/03/23
->last update/date:27/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main (void)
{

    int d,q,r,verify,not_prime;

    not_prime = 0;
    verify = 1;
    d = 2;

    for (int i = 2 ; i < 11 ; i++ )
    {
        q = i/d;
        r = i - (d*q);

        while (r  != 0)
        {
            d = d + r;
            q = i/d;
            r = i - (d*q);

            verify++;
        }

        if(verify > 1)
        {
            not_prime++;
        }
    }
   printf("not prime numbers:%i\n",not_prime); 
}