/*Write a program to calculate factorial 
of given number using recursive function*/

#include<stdio.h>
#include<conio.h>

long int fact(int x)
{
    if(x==0 || x ==1)
        return 1;
    else
        return(x*fact(x-1));
}

int main()
{
    int n;
    printf("Enter any numbers ");
    scanf("%d",&n);
    printf("The factorial of %d is %ld",n,fact(n));
    getch();
    return 0;
}   