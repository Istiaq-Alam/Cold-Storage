#include<stdio.h>

int main ()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);

    if(y%4==0)
        printf("This year %d is Leap year",y);
    else if(y==2000 || y==1900 || y==2100)
        (y%400==0)? printf("This year %d is Leap year",y) : printf("This year %d is not Leap year",y);
    else
        printf("This year %d is not a Leap year",y);

    return 0;


}

