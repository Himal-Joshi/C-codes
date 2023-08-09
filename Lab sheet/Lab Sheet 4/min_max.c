/*Write a program to read set of numbers until user wants 
and calculate and print their maximum and minimum values.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,max,min,user=1,count=0;
    char decision;
    while(user == 1)
    {
        printf("Enter a number");
        scanf("%d",&num);
        if(count ==0)
          {
            max = min = num;
            count++;
          }
        if(num>max)
         {
            max = num;
         }
        else if(num<max)
         {
            min = num;
         }
        printf("Add more numbers?(y/n): ");
            scanf(" %c",&decision);
                if(decision=='n' || decision=='N')
                    user = 0;
    }
    printf("Max = %d \n Min = %d ",max,min);
    getch();
    return 0;
}
