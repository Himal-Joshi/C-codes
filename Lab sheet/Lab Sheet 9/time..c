#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int mod(int n)
    {
        return (n < 0) ? abs(n) : n;
        /*if(n<0)
            return -1*n;
        return n;*/
    }

struct time
{
        int hrs,min,sec;
};

int main()
{
    struct time prev,curnt,diff;
    printf("Enter hours minute and  sec for previous time");
    scanf("%d %d %d",&prev.hrs,&prev.min,&prev.sec);
    printf("Enter hours minute and  sec for current time");
    scanf("%d %d %d",&curnt.hrs,&curnt.min,&curnt.sec);

    diff.hrs = mod(prev.hrs-curnt.hrs);
    diff.min = mod(prev.min-curnt.min);
    diff.sec = mod(prev.sec-curnt.sec);

    printf("Diffference in time :\n %d %d %d",diff.hrs,diff.min,diff.sec);
    getch();
    return 0;
}
