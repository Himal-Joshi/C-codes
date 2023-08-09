/*Write a program to find biggest among 
three numbers using pointer.*/

#include<stdio.h>
#include<conio.h>

int great (int *p, int*q, int*r)
    {
        if(*p>*q && *p>*r)
            return (*p);
        else if (*q>*p && *q>*r)
            return (*q);
        else
            return (*r);
    }

int main()
    {
        int a,b,c,n,*m,*x,*y,*z;
        x=&a;
        y=&b;
        z=&c;
        m=&n;
        printf("Enter three numbers");
        scanf("%d %d %d",x,y,z);
        n = great(&a,&b,&c);
        printf("Greatest number is %d",*m);
        getch();
        return 0;
    }