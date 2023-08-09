/*Write a program to find the sum of 
all the elements of an array using pointers.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[50],*p,n,i,sum=0;
    p = &a[0];
    float avg;
    printf("Enter the no of element to be entered ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
            scanf(" %d",p+i);
        }
    for(i=0;i<n;i++)
        {
            sum += *(p+i);
        }
    avg = (float)sum/n;
    printf("The sum is %d\n",sum);
    printf("The average is %f",avg);
    getch();
    return 0;
}