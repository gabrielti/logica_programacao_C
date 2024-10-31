#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char phrase[51]; // 51 because it is 50 char and the last position is the \0 (represents de end of string, will not complete the rest of the string with garbege memory)
    char phrasebackwards[51];

    printf("text(max 50 char):");
    fgets(phrase,51,stdin); //It already includes the \0

    int n = strlen(phrase);
    printf("string lenght:%i\n",n);

    /*for(int i = 0 ; i <= n ; i++)
    {
        phrasebackwards[i] = phrase[i];
    }string copy successfully*/

    /*for(int i = 0 ; i <= n ; i++)
    {
        phrasebackwards[i] = phrase[n];
    }it is copying backwards, the problem is that the \0 is the first "char" in the string, so the string is a NULL char, empty! Thats why the size is 0 WRONG LOGIC!*/
    //NOPE! THERE IS NOTHING TO DO WITH THAT, THE LOGIC IS WRONG , IT GOES INDEED = {'\0','A','L','0'}, IT DOESNT PRINT THE '\0'

    /* ERROR! Need to do the reverse logic
    for(int i = 0 ; i < (n-1) ; i++)
    {
        phrasebackwards[n-i] = phrase[i];
    }*/

    for(int i = (n - 1) ; i>=0 ; i--)
    {
        phrasebackwards[(n-1) - i] = phrase[i];
    }

    //phrasebackwards[x] = '\0'; //"" is for text , '' is for single char

    int m = strlen(phrasebackwards);
    printf("phrase:%s",phrase);
    printf("backards phrase lenght:%i\n",m);
    printf("phrasebackwards[0]:%i\n\n",phrasebackwards[0]); //ASCII table in decimal, it will display 10 if "ola" is written, why?. 10 means line feed, it equals to \n
    printf("phrase backwards:%s\n",phrasebackwards); 
    
}

//The problem is that, if for example the phrase is: hello. You used 5 positions in the string vectors, the rest is memory garbage, there is nothing in there.
//So it will print 51-5 = 46 blanket spaces and THAN your word reversed. So what you need to do is know the string lenght, its not that simple when working with strings
//remember that space is considerated a char (blank), char = 1