/*Write a program to enter 10 floating 
numbers in an array and display it.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a[10];
    int i;
    printf("Enter the floating numbers ");
    for(i=0;i<10;i++)
        scanf("%f",&a[i]);
    printf("\nThe entered floating numbers are ");
    for(i=0;i<10;i++)
        printf("\n %f",a[i]);
    getch();
    return 0;
}