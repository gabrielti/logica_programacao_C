#include<stdio.h>


float identidade(float input[][2])
{
    float result;

    result = (input[0][0]*input[1][1] - input[0][1]*input[1][0]);

    return(result); //Valor de retorno da função é um float, portanto o tipo da função tem que ser um float
}




int main(void) //A função é int porque no fim da execução só retorna 2 valores, 0 ou 1. Ou seja, executou a função principal ou não(houve erro);
{
    float matrix[2][2];

    for(int i = 0 ; i < 2 ; i++)
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("number:");
            scanf("%f",&matrix[i][j]);
        }

    printf("identidade:%f\n",identidade(matrix));    

}