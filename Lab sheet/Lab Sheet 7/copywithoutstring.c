/*Write a program to copy one string to another 
string without using string handling functions*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char a[50],b[50];
    int i;
    printf("Enter string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        {
            b[i]=a[i];
        }
    b[i]='\0';
    printf("Copied string = %s ",b);
    getch();
    return 0;
}