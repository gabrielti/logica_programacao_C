#include<stdio.h>

int main(void)
{
    float score;

    printf("student score:");
    scanf("%f",&score);
  
    if(score > 0 && score <= 100)
    {
        if(score >= 70)
        {
            printf("student approved\n");  
        }

        else if(40 <= score && score < 70)
        {
            printf("going to finals\n");
        }

    else
        {
        printf("student flunked\n");
        }
    }

    else
    {
        printf("invalid grade\n");
    } 
} 
