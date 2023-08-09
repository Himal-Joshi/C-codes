/*Write a program to generate first n Fibonacci numbers.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,c,i;
    printf("Enter number up to where fibonacci series to be displayed ");
    scanf("%d",&n);
    a=1;
    b=1;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
        {
            c = a+b;
            printf(" %d ",c);
            a=b;
            b=c;
        }
    getch();
    return 0;
}
