#include<stdio.h>

int main(void)
{
    int age,count1,count2,count3,count4,count5,count6;

    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    count5 = 0;
    count6 = 0;

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("age:");
        scanf("%i",&age);

        if(age >= 0 && age <= 15)
        {
            count1++;
        }

        else if(age >= 16 && age <= 18)
        {
            count2++;
        }
        
        else if(age > 18 && age <= 23)
        {
            count3++;
        }
        
        else if(age >=24 && age <= 60)
        {
            count4++;
        }
        
        else if(age > 60 && age <= 65)
        {
            count5++;
        }

        else
        {
            count6++;
        }
    }

    printf("age(0-15):%i\n",count1);
    printf("age(16-18):%i\n",count2);
    printf("age(19-23):%i\n",count3);
    printf("age(24-60):%i\n",count4);
    printf("age(61-65):%i\n",count5);
    printf("age(over 66):%i\n",count6);
    
}