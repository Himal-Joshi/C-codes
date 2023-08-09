/*Write a program to add, subtract, multiply and divide two 
integers using user defined type function with return type*/

#include<stdio.h>
#include<conio.h>

int add (int a,int b)
{
    return a+b;
}

int subs (int c,int d)
{
    return c-d;
}

int mult (int e,int f)
{
    return e*f;
}

int div (int g,int h)
{
    return g/h;
}

int main()
{
    int x,y;
    printf("Enter any numbers ");
    scanf("%d %d",&x,&y);
    printf("The addition of the numbers are %d",add(x,y));
    printf("\nThe substraction of the numbers are %d",subs(x,y));
    printf("\nThe multiplication of the numbers are %d",mult(x,y));
    printf("\nThe division of the numbers are %d",div(x,y));
    getch();
    return 0;
}
