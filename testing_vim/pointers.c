#include<stdio.h>

int main(void)
{
	int n;
	int *pointer;
	
	pointer = &n;

	printf("integer:");
	scanf("%i",&n);

	printf("n memory adress:%p \n",&n);
	printf("content stored in memory with name n:%i \n",n);
	
	printf("pointer memory adress:%p \n",&pointer);
	printf("pointing(storying) adress:%p \n",pointer);
	printf("content the pointer is pointing to: %i\n",*pointer);
}
