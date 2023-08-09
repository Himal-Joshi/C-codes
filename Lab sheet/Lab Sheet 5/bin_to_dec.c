/*Write a program to convert decimal numbers into its 
equivalent binary numbers using user defined function. & VICE-VERSA*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int bin_to_dec(int x)
{
    int i=0,r,c=0;
    while(x!=0)
        {
            r=x%10;
            c=c+ r*pow(2,i);
            x=x/10;
            i = i+1;
        }
    return c;
}

int dec_to_bin(int y)
{
    int i=0,r,c=0;
    while(y!=0)
        {
            r=y%2;
            c=c+ r*pow(10,i);
            y=y/2;            
            i = i+1;
        }
    return c;
}

int main()
{
    int b,d;
    printf("Enter any binary number to be converted into decimal number ");
    scanf("%d",&b);
    printf("Enter any decimal number to be converted into binary number ");
    scanf("%d",&d);
    printf("The converted binary number %d to decmial number is %d\n ",b,bin_to_dec(b));
    printf("The converted decimal number %d to binary number is %d ",b,dec_to_bin(d));
    getch();
    return 0;
}