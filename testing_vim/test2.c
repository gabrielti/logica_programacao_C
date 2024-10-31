#include<stdio.h>

int negative(int negative_number)
{
	negative_number = negative_number * (-1);
	return(negative_number);
}


int main(void)
{
	int number,result;
	
	printf("number:");
	scanf("%i",&number);

	result = negative(number);
	printf("negative:%i\n",result);
}

	
