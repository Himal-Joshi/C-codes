/*Write a program to read a list of words, arrange them 
in dictionary order and print the ordered list using 
function Read (), Arrange () and Display () respectively.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void read(char a[5][100])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter word: ");
        fgets(a[i], 100, stdin);
    }
}

void arrange(char a[5][100])
{
    int i, j;
    char temp[100];
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
}

void print(char a[5][100])
{
    for (int i = 0; i < 5; i++)
        printf("\t%s", a[i]);
}

int main()
{
    char a[5][100];
    read(a);
    printf("Entered words:\n");
    print(a);
    arrange(a);
    printf("\nSorted words:\n");
    print(a);
    getch();
    return 0;
}
