/*Write a program that reads two numbers and an arithmetic operator (+, -, *, /) and perform
the operation as per the operator supplied using switch case.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char c;
    int a,b;
    printf("Enter any two numbers \n");
    scanf("%d %d",&a,&b);
    printf("Enter arithmetic operator ");
    fflush(stdin);
    scanf("%c",&c);
    switch(c)
    {
        case '+' : printf("%d + %d = %d",a,b,a+b);
        break;
        case '-' : printf("%d - %d = %d",a,b,a-b);
        break;
        case '*' : printf("%d * %d = %d",a,b,a*b);
        break;
        case '/' : printf("%d / %d = %d",a,b,a/b);
        break;
        default:
        printf("Invalid operator");
    }
    getch();
    return 0;
}