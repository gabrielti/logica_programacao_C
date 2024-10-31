#include<stdio.h>

void transposta(float transp_matrix[3][3]); //function prototype, always "one above, before use. declaring the function"<-
void imprime_matriz(float print_matrix[][3]); //Se declarar depois da main

//Meu erro é que vai ficar em um loop infinito! E além disso cai nisso aqui, prototipo de função <-
//Se não declarar, uma função não "encherga" a outra



void transposta(float transp_matrix[][3])
{
    for(int j = 0 ; j < 3 ; j++)
    {
        for(int i = 0 ; i < 3 ; i++)
        {
            transp_matrix[i][j] = transp_matrix[j][i];            
        }
    }

    imprime_matriz(transp_matrix);
}


void imprime_matriz(float print_matrix[][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%f  ",print_matrix[i][j]);
        }

        printf("\n");
    }

    transposta(print_matrix);

}



void preenche_matriz(float matrix_function[][3])
{
    for (int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("number:");
            scanf("%f",&matrix_function[i][j]);
        }

    imprime_matriz(matrix_function);    
}



int main(void)
{
    float matrix[3][3];

    preenche_matriz(matrix);
}

/*void imprime_matriz(float) // Se declarar depois da main
{
}*/
