#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter your first number:");
    scanf("%d",&x);
    printf("Enter your second number:");
    scanf("%d",&y);

    (x>y) ? printf("The largest number is:%d",x) : printf("The largest number is:%d",x);
    return 0;
}
