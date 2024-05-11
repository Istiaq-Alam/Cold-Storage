#include<stdio.h>

int main ()
{
    int x,y;
    printf("Enter the amount of your quantity:");
    scanf("%d",&y);

    x= y*100;

    if(x>1000)
    {
        y= (x*10)/100;
        y= x-y;
        printf("Discount cost is %d",y);
    }
    else
        printf("You have no Discount..\n Total cost %d",x);

    return 0;


}

