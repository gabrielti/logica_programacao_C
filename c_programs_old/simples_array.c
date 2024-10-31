/*------------------------------------------------------------------------------------------------------------------------
->program name:simple_array
->objective:input 10 integers into an array and print the numbers that are stores only in the 0 and even array positions
->version:1.0
->release date:30/03/23
->last update/date:30/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main (void)
{
    int numbers[10];

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("number:");
        scanf("%i",&numbers[i]);
    }

    for (int i = 0 ; i < 10 ; i++)
    {
        if (i%2 == 0 || i == 0)
        {
            printf("number:%i | position in the array:%i\n",numbers[i],i);
        }

    }
}