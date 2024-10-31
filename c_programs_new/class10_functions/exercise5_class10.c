#include<stdio.h>

//é um void porque nao vai retornar nada para main. os valores vao ser ordenados diretamente nos enderecos de memoria do vetor

void ordena(float vetor_ordem[])
{
    int choice;

    printf("1-ordem crescente\n");
    printf("2-ordem decrescente\n");
    printf(":");
    scanf("%i",&choice);

    switch(choice)
    {
        case 1 :
        
    }
}







int main(void)
{
    float vector[20];

    for(int i = 0 ; i < 20 ; i++)
    {
        printf("number:");
        scanf("%f",&vector[i]);
    }

    ordena(vector);
}