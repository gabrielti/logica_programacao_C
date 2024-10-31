#include<stdio.h>

int main(void)
{
    float a,b,c,biggest,smallest,aux,sum,arithmeticmean;
    int count = 0;

    //initial input and validate initial conditions
    printf("number:");
    scanf("%f",&a);

    if(a > 0)
    {
        printf("number:");
        scanf("%f",&b);
        count++;

        if(b > 0)
        {
            count++;
            printf("number:");
            scanf("%f",&c);

            if(c > 0)
            {
                c = c;
                count++;
                aux = a+b+c;
            }

            else
            {
                return 0;
            }
        }

        else
        {
            return 0;

        }
    }

    else
    {
        return 0;
    }
    
    //initial condition to determ biggest and smallest number
    if(a > b)
    {
        biggest = a;
        smallest = b;
    }

    else
    {
        biggest = b;
        smallest = a;
    }

    if(c > biggest)
    {
        biggest = c;
    }

    else if(c < smallest)
    {
        smallest = c;
    }

    else
    {
        smallest = smallest; //if it was break, it would exit the while function
    }
    
    //loop condition
    while(c >= 0)
    {
        printf("number:");
        scanf("%f",&c); //c always become the new input number, it just needs to be compared to the biggest and smallest number

        if(c < 0)
        {
            sum = aux;
            arithmeticmean = sum/(float)count;

            printf("\n----------------------------\n");
            printf("amount of valid numbers typed:%i\n",count);
            printf("sum:%f\n",sum);
            printf("biggest number:%f\n",biggest);
            printf("smallest number:%f\n",smallest);
            printf("arithmetic mean:%f\n",arithmeticmean);
            printf("----------------------------\n");

            return 0;
        }

        else
        {
            if(c > biggest)
            {
                biggest = c;
            }

            else if(c < smallest)
            {
                smallest = c;
            }

            else
            {
                smallest = smallest;
            }

          sum = aux + c;
          aux = sum;  
          count++;

        }
  }

}