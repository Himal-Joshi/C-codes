/*Write a program to write name, roll number and age of 
5 students in to a disk file name"STUDENT.DAT".*/

#include <stdio.h>

struct emp {
    char name[20];
    int roll;
    int age;
};

int main() {
    FILE *fptr;
    struct emp e[5];
    fptr = fopen("STUDENT.DAT", "w");
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
    }

    for (i = 0; i < 5; i++) {
        fprintf(fptr, "Name: %sRoll: %d\nAge: %d\n", e[i].name, e[i].roll, e[i].age);
    }

    fclose(fptr);
    return 0;
}