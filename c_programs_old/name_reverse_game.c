/*------------------------------------------------------------------------------------------------------------------
->program name:phrase_reverse_game
->objective:reverse the users name
->version:1.0
->release date:30/03/23
->last update/date:30/03/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    char name[45];
    char copy[45];

    printf("*max amount of letters your name can have -> 45 \n");
    printf("name:\n");
    fgets(name,45,stdin);

    for (int i = 0 ; i < 45 ; i++)
    {
        copy[i] = name[44 - i];
    }

    printf("\nname in reverse:");

    for (int i = 0 ; i < 45 ; i++)
    {
        printf("%c",copy[i]);
    }
   printf("\n"); 
}