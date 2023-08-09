/*Write a program to ask list of numbers from users, 
sort them and display sorted list using pointer.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void size(int *arr[],int n)
    {
        printf("Enter %d numbers",n);
        for(int i =0;i<n;i++)
            {
                arr[i + 1] = (int *)malloc(sizeof(int));
                scanf("%d",arr[i+1]);
            }
    }

void sort(int *arr[],int n)
    {   
        int *temp;
        temp = (int *)malloc(sizeof(int));
        for (int i = 0; i < n - 1; i++) 
          {
            for (int j = i + 1; j < n; j++) 
                {
                    if (*arr[i+1] > *arr[j+1]) 
                        {
                            *temp = *arr[i+1];
                            *arr[i+1] = *arr[j+1];
                            *arr[j+1] = *temp;
                        }
                }
          }  
          free(temp);     
    }

void display(int *arr[],int n)
    {
        for (int i = 0; i < n; i++) 
            {
                printf("\t%d", *arr[i+1]);
            }
        printf("\n");
    }

int main()
{
    int *arr[50],n;
    arr[0]=(int*)malloc(sizeof(int));
    printf("How many terms u wnat to enter ");
    scanf("%d",&n);
    if((arr[0]=(int *)malloc(sizeof(int)))==NULL)
        {
            printf("Memory alloction failed");
            return 1;
        }
    free(arr[0]);
    size(arr,n);
    sort(arr,n);
    display(arr,n);

    for(int i=0;i<n;i++)
        {
            free(arr[i+1]);
        }
    getch();
    return 0;
}