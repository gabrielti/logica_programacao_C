/*------------------------------------------------------------------------------------------------------------------
->program name:even_odd_using_function
->objective:use a function to verify if an integer is even or odd
->version:1.0
->release date:03/04/23
->last update/date:03/04/23
->developer name:gabriel_taki
-------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>

int analyze(char sentence[])
{
    int vogal = 0;
    int space = 0;
    int consoante;
    for(int i = 0 ; i < (int)strlen(sentence); i++)
    {
        if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
            vogal++;
        }

        else if(sentence[i] == ' ')
        {
           space++; 
        }

        //Se fosse sem o else if, ele iria contabilizar os espaços na vogal, aqui ele não contabiliza, subtrai 1 por causa do \0 da string
        else
        {
           consoante++;
        }
    }

    printf("qtd.vogais:%i\n",vogal);
    printf("qtd.consoantes:%i\n",consoante-1);

}




int main (void)
{
    char text[100];
    
    printf("text:");
    fgets(text,100,stdin);

    analyze(text);
    printf("%zu \n",strlen(text));
}