/*Write a program to find given number is Armstrong or not.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main()
{
    int a,r,sum=0,org;
    printf("Enter any number ");
    scanf("%d",&a);
    org = a;
    while(a!=0){
        r=a%10;
        sum = r*r*r + sum;      // pow(r,3) not used because pow gives floating value 
        a = a/10;
    }
    (org == sum) ? printf("%d is armstrong",org) : printf("%d is not armstrong",org);
    getch();
    return 0;
}
