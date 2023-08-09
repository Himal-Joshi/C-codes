/*Write a program to convert a given character from lowercase to uppercase and
vice versa.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    printf("Enter any character in any case: ");
    scanf("%c", &c);
    
    if (c >= 'a' && c <= 'z'){
        c -= 32;
    }
    else if (c >= 'A' && c <= 'Z'){
        c += 32;
    }
    else 
        printf("Enter valid character ");
    printf("Converted to opposite case is %c\n", c);
    getch();
    return 0; 
}
