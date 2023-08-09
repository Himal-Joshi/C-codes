/*Write a program to calculate HCF and LCM of two integers provided by users.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,a,b,t,hcf,lcm;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf = a;
    lcm = (x*y)/hcf;
    printf("HCF of %d and %d is %d",x,y,hcf);
    printf("\nLCM of %d and %d is %d",x,y,lcm);
    getch();
    return 0;
}