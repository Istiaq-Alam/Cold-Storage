#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter your salary:");
    scanf("%d",&x);
    printf("Enter year of service:");
    scanf("%d",&y);
    if(y>5)
    {
       z=(x*5)/100;
       z=x+z;
       printf("The bonus amount of employee is: %d",z);
    }
    else
       printf("Sorry you have no bonus...");

    return 0;


}


