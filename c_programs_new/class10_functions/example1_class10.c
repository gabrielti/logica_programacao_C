#include<stdio.h>

void verification(int integer) //função void porque não retorna valor nenhum para a função main. Passagem do valor, copia do conteudo em number para o endereço de memoria de nome integer
{
    if(integer % 2 == 0)
    {
        printf("even number\n\n");
    }

    else
    {
        printf("odd number\n\n");
    }
}


int main(void)
{
    int number; //alocamente/reserva de endereço de memoria para receber um int. Com nomenclatura/rotulo number, que é uma variavel. (Não é um ponteiro! É apenas um rotulo. Ponteiro é uma variavel que armazena um endereço de memória de outra variavel)

    printf("integer:");
    scanf("%i",&number); //endereço de memoria rotulado("nomeado") como number. ->"Indexe/guarde o valor recebido no endereço de memoria alocado pelo rotulo de number"

    if(number < 0)
    {
        return 0;
    }

    else
    {
        do
        {
            verification(number);
            printf("integer:");
            scanf("%i",&number);
        }while(number > 0);
    }

}