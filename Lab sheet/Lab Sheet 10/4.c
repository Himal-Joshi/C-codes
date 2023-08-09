/*Write a program to read the details of book authors write it to 
file until user wants then read and display nth record in a file 
where n is read from the user. The data for authors must be represented 
by structures that contain name, nationality and number of books published.*/

#include <stdio.h>
#include <string.h>

struct writer {
    char name[20];
};

int main() {
    struct writer w;
    FILE* fptr;

    fptr = fopen("writer.txt", "wb");
    if (fptr == NULL) {
        printf("File error!\n");
        return 1;
    }

    char c;
    do {
        printf("Enter name of the reader: ");
        gets(w.name);
        fwrite(&w, sizeof(w), 1, fptr);

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &c); // Read the response and ignore leading whitespace
        getchar(); 
    } while (c == 'Y' || c == 'y');

    fclose(fptr);


    fptr = fopen("writer.txt", "rb");
    if (fptr == NULL) {
        printf("File error!\n");
        return 1;
    }

    int n;
    printf("\nEnter the index of the data (1 to n) you want to see: ");
    scanf("%d", &n);

    fseek(fptr, (n - 1) * sizeof(struct writer), SEEK_SET);
        

    
    if (fread(&w, sizeof(struct writer), 1, fptr) == 1) {
        printf("Name: %s\n", w.name);
    } else {
        printf("Index out of range!\n");
    }

    fclose(fptr);
    return 0;
}