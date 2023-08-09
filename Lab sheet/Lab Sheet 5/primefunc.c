/*Write a program to check whether an integer is 
prime or not using user defined function.*/

#include<stdio.h>
#include<conio.h>

int prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
        {
            if(a%i==0)
                count+= 1;
        }
        return count;
}

int main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    if(prime(n)==2)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    getch();
    return 0;
}
