/*Write a program to check whether a year is leap year or not.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int y;
    printf("Enter year :");
    scanf("%d",&y);
    if(y%4 == 0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                printf("%d is a leap year",y);
            else
                printf("%d is not leap year",y);
        }
        else
            printf("%d is a leap year",y);
    }
    else
        printf("%d is not a leap year",y);
    getch();
    return 0;
}