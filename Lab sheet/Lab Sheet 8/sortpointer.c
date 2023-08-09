/*Write a program to ask list of numbers from users, 
sort them and display sorted list using pointer.*/

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main() {
    int *a[50], n, i, j, *temp;
    
    a[0]=(int*)malloc(sizeof(int));
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    temp = (int *)malloc(sizeof(int));
    
    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
      
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                *temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = *temp;
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("\t%d", *(a + i));
    }
    

    free(temp);
    
    getch();
    return 0;
}
