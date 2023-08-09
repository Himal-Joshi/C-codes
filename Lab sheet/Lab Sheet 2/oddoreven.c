/*Write a program to check odd or even number
(a) using modulus operator*/

#include<stdio.h>
#include<conio.h>

int main()
 {
    int a;
    printf("Enter any numbers ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is even number",a);
    else
        printf("%d is odd number",a);
    getch();
    return 0;
 }