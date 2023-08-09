/*WAP to read square matrix and print the same matrix by 
replacing its diagonal elements by minimum value among 
the elements of original matrix.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
   int min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                a[i][j] = min;
            }
        }
    }

    printf("Resultant matrix is =\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("%d \t",a[i][j]);
                }
            printf("\n");
        }
    getch();
    return 0;
}