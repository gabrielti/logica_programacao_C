#include<stdio.h>

int negative(int negative)
{
  negative = negative*(-1);
  return(negative);
}


int main(void)
{

  int number;
  
  printf("integer:");
  scanf("%i",&number);
  
  number = negative(number);
  
  printf("negative number:%i\n",number);
  
  return 0;

}
