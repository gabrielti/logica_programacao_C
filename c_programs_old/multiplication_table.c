/*------------------------------------------------------------------------------
->program name:multiplication table
->objective:show the multiplication table given an input number between 1 and 9
->version:1.0
->release date:24/03/23
->last update/date:24/03/23
->developer name:gabriel_taki
------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int number;

    printf("type an integer:");
    scanf("%i",&number);

    for(int i = 1 ; i < 11 ; i++)
    {
        printf("%i X %i = %i \n", number,i,number*i);
    }

}