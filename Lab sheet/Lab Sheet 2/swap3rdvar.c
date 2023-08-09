/*Write a program to swap two variables values using third variables*/

#include<stdio.h>
#include<conio.h>

int main()
 {
    int a,b,temp;
    printf("Enter any two numbers ");
    scanf("%d %d",&a,&b);
    printf("The entered values are %d %d \n",a,b);
       temp = a;
       a = b;
       b = temp;
    printf("The swapped values are %d %d",a,b);
    getch();
    return 0;
 }