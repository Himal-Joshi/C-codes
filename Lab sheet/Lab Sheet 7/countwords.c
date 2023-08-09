/*Write a program to read a sentence and count the 
number of characters & words in that sentence.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100];
    int i=0,letters,word=0;
    printf("Enter any sentence ");
    gets(str);
    while(str[i]!='\0')
        {
            if(str[i] == ' ')   
                {
                    word++;
                }
            i++;
        }
    letters=i-word;
    printf("No of characters = %d \n No of words = %d",letters,word+1);
    getch();
    return 0;
}