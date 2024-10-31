#include<stdio.h>

int main(void)
{
  int a,b;
  a = 5;
  b = 6;
  
  if(b > a)
  {
    printf("%i > %i\n",b,a);
  }
  
  else if(b != a)
  {
    printf("%i is different than %i\n",b,a);
  }
  
  else
  {
    printf("%i < %i\n",a,b);
  }
  
  return 0;

} //realmente ele pula o else if
