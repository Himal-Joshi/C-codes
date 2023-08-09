/*Write a program to swap two variables values without using third variables*/

#include<stdio.h>
#include<conio.h>

int main()
 {
    int a,b;
    printf("Enter any two numbers ");
    scanf("%d %d",&a,&b);
    printf("The entered values are %d %d \n",a,b);
        a = a + b;      // a = 5 + 8 = 13
        b = a - b;      // b = 13 - 8 = 5
        a = a - b;      // a = 13 - 5 = 8
    printf("The swapped values are %d %d",a,b);
    getch();
    return 0;
 }