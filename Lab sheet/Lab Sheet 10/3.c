/*Write a program to input and save record like name, roll, address 
and obtained marks of 48 students in a binary file and search 
and display the record of a student whose obtained marks is 
highest. The information should be organized in a structure.*/

#include <stdio.h>
#include <string.h>

struct emp {
    char name[20];
    int roll;
    int age;
    int marks; 
};

int main() {
    FILE *fptr;
    struct emp e[5];
    fptr = fopen("STUDENT.DAT", "w+");
    if (fptr == NULL) {
        printf("ERR");
        return 1;
    }

    int i;
    for (i = 0; i < 5; i++) {
        fflush(stdin);
        printf("Enter name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Enter roll: ");
        scanf("%d", &e[i].roll);
        printf("Enter age: ");
        scanf("%d", &e[i].age);
        printf("Enter marks: ");
        scanf("%d", &e[i].marks);
    }


    for (i = 0; i < 5; i++) {
        fprintf(fptr, "Name: %s\nRoll: %d\nAge: %d\nMarks: %d\n", e[i].name, e[i].roll, e[i].age, e[i].marks);
    }

    rewind(fptr);


    printf("\nContent of STUDENT.DAT:\n");
    char line[100];
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }


    int maxMarks = -1;
    int status = -1;
    for (i = 0; i < 5; i++) {
        if (e[i].marks > maxMarks) {
            maxMarks = e[i].marks;
            status = i;
        }
    }

    if (status != -1) {
        printf("\nStudent with the highest marks:\n");
        printf("Name: %s", e[status].name);
        printf("Roll: %d\n", e[status].roll);
        printf("Age: %d\n", e[status].age);
        printf("Marks: %d\n", e[status].marks);
    } else {
        printf("\nNo students found.\n");
    }

    fclose(fptr);
    return 0;
}