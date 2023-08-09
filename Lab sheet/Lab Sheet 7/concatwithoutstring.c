/*Write a program to concatenate two string using user defined 
functions concatenate () without using string handling functions.*/

#include <stdio.h>

void stricat() {
    char str1[100], str2[100], str3[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    // Copy the first string to the third string
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0; // Reset i to 0 for the second string
    // Copy the second string to the third string
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }

    str3[j] = '\0'; // Add null terminator to the concatenated string
    printf("Concatenated string: %s\n", str3);
}

int main() {
    stricat();
    return 0;
}
