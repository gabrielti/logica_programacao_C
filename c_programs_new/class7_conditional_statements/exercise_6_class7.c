#include<stdio.h>
#include<math.h>

int main(void)
{
    int op;
    float number1,number2;

    printf("(1)sum\n");
    printf("(2)subtraction\n");
    printf("(3)multiplication\n");
    printf("(4)division\n");
    printf("(5)exponentiation\n");
    printf("(6)square_root\n");
    printf(":");

    scanf("%i",&op);

    switch(op)
    {
        case 1:
        printf("number:");
        scanf("%f",&number1);
        printf("number:");
        scanf("%f",&number2);

        printf("sum:%f\n",number1+number2);
        
            break;

        case 2:
        printf("number:");
        scanf("%f",&number1);
        printf("number:");
        scanf("%f",&number2);

        printf("subtraction:%f\n",number1-number2);
        
            break;

        case 3:
        printf("number:");
        scanf("%f",&number1);
        printf("number:");
        scanf("%f",&number2);

        printf("multiplication:%f\n",number1*number2);

            break;
       
        case 4:
        printf("number:");
        scanf("%f",&number1);
        printf("divided by number:");
        scanf("%f",&number2);

        if(number2 == 0)
        {
            printf("divion by 0 is not valid, number:");
            scanf("%f",&number2);
            
            if(number2 == 0)
            {
                return 0;
            }

            else
            {
                printf("division:%f\n",number1/number2);
            }

        }

        else
        {
            printf("division:%f\n",number1/number2);
        }
        
            break;

        case 5:
        printf("number:");
        scanf("%f",&number1);
        printf("expoent:");
        scanf("%f",&number2);

        printf("result:%f\n",pow(number1,number2)); //number1^number2

            break;

        case 6:
        printf("number:");
        scanf("%f",&number1);

        if(number1 < 0)
        {
            printf("negative value, re-type number:");
            scanf("%f",&number1);

            if(number1 < 0)
            {
                return 0;
            }

            else
            {
                printf("result:%f\n",sqrt(number1));
            }
        }

        else
        {
            printf("result:%f\n",sqrt(number1));
        }

            break;

    }


}