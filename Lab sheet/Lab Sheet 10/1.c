/*Write characters into a file "filec.txt". The set of characters are 
read form the keyboard until an enter key is pressed (use putc() and getc() function).*/

#include<stdio.h>
int main(){
    FILE *fptr;
    char c;
    fptr=fopen("filec.txt","w");
    if(fptr==NULL){
        printf("Err");
        exit(1);
    }
    printf("Enter text");
    fflush(stdin);
    while ((c=getchar())!='\n'){
        fputc(c,fptr);
    }
    fclose(fptr);
    return 0;

}