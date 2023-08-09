/*Write a program to initialize one dimensional array 
of size 8 and display the sum and average of array elements*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter elements of 8d array ");
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);
    for(i=0;i<8;i++)
        sum+= a[i];
    avg=sum/8;
    printf("\nThe sum is %d",sum);
    printf("\nThe average is %f",avg);
    getch();
    return 0;
}