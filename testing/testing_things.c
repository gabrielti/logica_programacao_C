#include<stdio.h>

int sum(int passed)
{
  return(passed+5);
}



int main(void)
{
  int test,number;
  
  printf("integer:");
  scanf("%i",&number);
  
  test = sum(number);
  
  printf("sum:%i\n",test);
}
