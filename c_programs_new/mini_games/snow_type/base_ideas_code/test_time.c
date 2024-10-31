#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int number;
  time_t clock;
  
  srand((unsigned)time(&clock));
  
  for(int i = 0 ; i < 2 ; i++)
  {
    //number = rand() % 99;
    number = ((rand() % 8) + 2);  
    printf("random number:%i\n",number);
  }
  
  return 0;
}
