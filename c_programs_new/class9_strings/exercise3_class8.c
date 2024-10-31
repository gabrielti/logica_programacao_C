#include<stdio.h>
#include<string.h>

int main(void)
{
    int size,blank,a,e,i,o,u;
    char person_name[100];

    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;
    blank = 0;

    printf("name:");
    fgets(person_name,100,stdin);

    size = strlen(person_name);

    for(int count = 0 ; count < size ; count++)
    {
        if(person_name[count] == 'a')
        {
            a++;
        }

        else if(person_name[count] == 'e')
        {
            e++;
        }
        
        else if(person_name[count] == 'i')
        {
            i++;
        }

        else if(person_name[count] == 'o')
        {
            o++;
        }   

        else if(person_name[count] == 'u')
        {
            u++;
        }   

        else if(person_name[count] == 32) //Comparing with the ascii table, because a char is correspondent to a number in ascii
        {
            blank++;
        }   

    }
    printf("lenght:%i\n",size); //Size also has on it \n and blank spaces
    printf("amount of characters typed:%i\n",size-blank-1);
    printf("a:%i  e:%i  i:%i  o:%i  u:%i\n",a,e,i,o,u);
    
}