#include<stdio.h>

void imprime_matriz(float print_matrix[][3]) //deve ficar no topo , "one above the other for the below function to see it!
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%f  ",print_matrix[i][j]);
        }

        printf("\n");
    }
}

void transposta(float matrix_function_2[][3])
{
    float transp_matrix[3][3];

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            transp_matrix[i][j] = matrix_function_2[j][i];       
        }
    }

    imprime_matriz(transp_matrix);
}


void preenche_matriz(float matrix_function[][3])
{
    for (int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("number:");
            scanf("%f",&matrix_function[i][j]);
        }

    printf("\n");
    imprime_matriz(matrix_function);    
}



int main(void)
{
    float matrix[3][3];

    preenche_matriz(matrix);
    printf("\n");
    transposta(matrix);
}

//eu prciso criar uma matriz transposta porque se eu não criar e fizer por exemplo: matrix_tal[i][j] = matrix_tal[j][i]. ele vai modificar a matriz e copiar ao mesmo tempo
//ele vai se modificar e se auto copiar
