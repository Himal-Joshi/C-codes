/*WAP to read list of numbers, sort them in 
ascending orders and print the sorted list.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[50],i,j,temp,n;
    printf("How many numbers do you want to sort ");
    scanf("%d",&n);
    printf("Enter the numbers ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                }
        }
    printf("The numbers in ascending");
    for(i=0;i<n;i++)
        {
            printf("\t %d",a[i]);
        }
    getch();
    return 0;
}