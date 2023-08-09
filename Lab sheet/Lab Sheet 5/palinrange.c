/*Write a program to print all the palindrome numbers 
between the range entered by user using user defined function*/

#include<stdio.h>
#include<conio.h>

int palindrome(int a)
{
    int org=a,r,rev = 0;
    while(a!=0)
    {
        r = a%10;
        rev = rev*10+r;
        a = a/10;
    }
    return rev == org;
}

int main()
{
    int l,u,i;
    printf("Enter lower range and upper range ");
    scanf("%d %d",&l,&u);
    for(i = l ; i <=u ;i++)
        {
            if(palindrome(i))
                printf("%d \t",i);
        }
    getch();
    return 0;
}
