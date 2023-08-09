/*Write a program to read a sentence and reprint 
the same sentence by replacing all the occurrence 
of the substring "the " by "***"*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("Enter a sentence");
    fgets(a,100,stdin);

    if(a[strlen(a)-1]=='\n')
        {
            a[strlen(a)-1]=='\0';
        }
    for(int i=0;i<strlen(a);i++)
        {
            if(a[i] =='t' && a[i+1] == 'h' && a[i+2] == 'e')
                {
                    a[i]='*';
                    a[i+1]='*';
                    a[i+2]='*';
                }
        }
    printf("%s",a);
    getch();
    return 0;
}
