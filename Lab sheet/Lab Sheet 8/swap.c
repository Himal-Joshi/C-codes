/* Write a program to read two numbers and 
swap their values using pass by reference method.*/

#include<stdio.h>
void swap(int *a,int*b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
        printf("\nSwapped Values \n %d %d",*a,*b);
    }

int main()
    {
        int a,b;
        printf("Enter two numbers ");
        scanf("%d %d",&a,&b);
        printf("\nUnswapped Values \n %d %d",a,b);
        swap(&a,&b);
        return 0;

    }