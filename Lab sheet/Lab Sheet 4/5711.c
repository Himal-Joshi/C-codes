/*Write a program that asks a number and test the number whether 
it is multiple of 5 or not, divisible by 7 but not by eleven.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d",&a);
    if(a%5 == 0){
        if(a%7 == 0){
            if(a%11!= 0){
                printf("%d is divisible by 5 and 7 but not by 11",a);
            }
            else{
                printf("%d is divisible by 5,7 and 11",a);
            }
        }
        else{
            printf("%d is divisible by 5 only",a);
        }
    }
    else
        printf("%d is not divisible by 5",a);
    getch();
    return 0;
}