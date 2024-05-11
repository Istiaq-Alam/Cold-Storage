#include<stdio.h>

int main ()
{
    int x,y;
    printf("Enter your length of the rectangle:");
    scanf("%d",&x);
    printf("Enter your length of the rectangle:");
    scanf("%d",&y);

    if(x==y)
        printf("This is a Square");
    else if(x>y || y>x)
        printf("This is a rectangle");
    else
        printf("your input is in valid");

    return 0;


}
