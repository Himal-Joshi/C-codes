/*WAP to read list of numbers using function read (), sort them 
in ascending order using function sort () and display the sorted 
list using function display ().*/

#include<stdio.h>
#include<conio.h>

void read(int a[])
{
    for(int i=0;i<10;i++)
        {
            printf("Enter no ");
            scanf("%d",&a[i]);
        }
}

void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<9;i++)
        {
            for(j=i+1;j<10;j++)
                {
                    if(a[i]>a[j])
                        {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;                        }
                }
        }
}

void display(int a[])
{
    for(int i=0;i<10;i++)
        {
            printf("%d \t",a[i]);
        }
}

int main()
{
    int a[10];
    read(a);
    sort(a);
    display(a);
    getch();
    return 0;
}