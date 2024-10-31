#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void)
{
    system("clear");
    
    for(int i = 0 ; i < 4 ;i++)
    {
        printf("test\n");
        sleep(5);
    }

    return 0;
}