#include<stdio.h>
#include<conio.h>

int main()
{
    int a,fact;
    printf("Enter any number ");
    scanf("%d",&a);
    for(int i = 1 ; i <=a ;i++){
        if(a % i == 0)
            fact+=1;
    }
    if(fact = 2)
        printf("%d is prime number",a);
    else
        printf("%d is not prime number",a);
    getch();
    return 0;
}
