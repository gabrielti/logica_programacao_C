#include<stdio.h>

int main(void)
{
    float score;

    printf("student score:");
    scanf("%f",&score);

    if(score >= 70)
    {
        printf("student approved\n");
        /*if(score == 100)
            {
                printf("amazing!\n"); <- this is the correction, to show the amazing! and, than delete the "wrong" else if below (Contatenar if-else)
            }

           else
           {
            return 0; exit the if function
           } 
        */    
    }

    else if(score == 100) //In this case, without the correction, this condition will never happen because the first one will already be met (score > 70). So it will jump all the rest if-els
    {
        printf("amazing!\n");
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