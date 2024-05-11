#include<stdio.h>

int main ()
{
    int x,y;
    printf("Enter Any two numbers:\n");
    scanf("%d %d",&x,&y);

    if(x>y)
        printf("The greatest number is %d",x);
    else if(y>x)
        printf("The greatest number is %d",y);
    else
        printf("Those number are equal");

    return 0;


}

