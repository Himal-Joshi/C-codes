/*Write a program to find given number is palindrome or not.*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a,r,rev=0,org;
    printf("Enter any number ");
    scanf("%d",&a);
    org = a;
    while(a!=0){
        r=a%10;
        rev = rev*10 + r;
        a = a/10;
    }
    (org == rev) ? printf("%d is palindrome",org) : printf("%d is not palindrome",org);
    getch();
    return 0;
}
