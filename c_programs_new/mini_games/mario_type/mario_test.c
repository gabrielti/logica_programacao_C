#include<stdio.h>

int preenche_matriz_diagonal_superior_1(char base_2[][3])
{
    int limit_base_size = 3;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < limit_base_size; j++)
	{
		base_2[i][j] = '*';
	}

	limit_base_size--;

	if(limit_base_size < 0)
	{
		return 0;
	}
   }

}
   
	  	

int preenche_matriz_diagonal_inferior_1(char base_1[][3])
{
    int limit_base_size = 1 ;
    for(int i = 0 ; i < limit_base_size ; i++)
    {
        for(int j = 0 ; j < limit_base_size ; j++)
        {
            base_1[i][j] = '*';
        }

        limit_base_size++;

        if(limit_base_size == 4)
        {
            return 0;
        }
    }

}




int main(void)
{
    int option;
    char stair[3][3];

    printf("option(1 or 2):");
    scanf("%i",&option);

    if(option == 1)
    {
    preenche_matriz_diagonal_inferior_1(stair);
    }

    else
    {
	    preenche_matriz_diagonal_superior_1(stair);
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%c",stair[i][j]);
        }

        printf("\n");
    }
}
