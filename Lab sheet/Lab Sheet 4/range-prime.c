/*Write a program to generate and print all the 
prime numbers between the range specified by users.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,l,u,fact;
    printf("Enter Lower and upper range ");
    scanf("%d %d",&l,&u);
        for(i=l;i<=u;i++)
            {
                fact=0;
                for(j=1;j<=i;j++)
                     {
                        if(i%j==0)
                            fact+=1;
                     }
                if(fact==2)
                    printf("%d\t",i);
            }
    getch();
    return 0;
}
