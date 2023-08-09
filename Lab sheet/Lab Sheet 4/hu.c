/*Write a program to calculate and print the terms of following series up to nth
terms. -10 -12 -14 -18 -26 -42 -74.............*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a=-10,b=a,c,i,n;
    printf("Enter no of terms ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("\t %d",b);
            b = a - pow(2,i);
        }
    getch();
    return 0;
}
