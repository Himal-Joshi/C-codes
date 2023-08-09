/*Write a C program to prompt the user to input 3-digit number 
and print these values in forward and reversed order.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, r,rev=0;
    printf("Enter any number: ");
    scanf("%d", &a);
    printf("The entered number is %d\n", a);
    while(a != 0)
    {
        r = a % 10;
        rev = rev*10 + r;
        a = a/10;
     /*a = a / 10;
      r2 = a % 10;
      a = a / 10;
      r3 = a % 10;*/
    }
    //rev = r1 * 100 + r2 * 10 + r3;
    printf("Reversed number is %d\n", rev);

    getch();
    return 0;
}