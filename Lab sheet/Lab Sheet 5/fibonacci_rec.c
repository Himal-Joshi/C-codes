/*Write a recursive function to generate Fibonacci series.*/

#include<stdio.h>
#include<conio.h>

int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;   
    else
        return fibo(x-1) + fibo(x-2);
}

int main()
{
    int n,i;
    printf("Enter number of terms ");
    scanf("%d",&n);
    printf("The fibonacci series is displayed below\n");
    for(i=1;i<=n;i++)
        {
            printf("%d\t",fibo(i));
        }
}