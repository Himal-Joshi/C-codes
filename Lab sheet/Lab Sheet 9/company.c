/*Create a structure named company which has name, address, phone and noOfEmployee as member variables. 
Read name of company, its address, phone and noOfEmployee. Finally display these members' value.*/

#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>

struct company
    {
        int phone;
        char name[50];
        char address[50];
    }c;

int main()
{
    int n,i;
    printf("Eeter number of employes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("Enter name");
            gets(c.name);
            fflush(stdin);
            printf("Enter address");
            gets(c.address);
            printf("Enter phone");
            scanf("%d",&c.phone);
            fflush(stdin);
        }
    for(i=1;i<=n;i++)
    {
        printf("Name = %s Address = %s Phone = %d",c.name,c.address,c.phone);
    }
    getch();
    return 0;
}
