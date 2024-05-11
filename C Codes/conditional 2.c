//Find the inputted number is positive or negative
#include <stdio.h>

int main()
{
    int x;
    printf("Enter your first number:");
    scanf("%d",&x);


    (x>0) ? printf("The number is positive +%d",x) : printf("The number is negative %d",x);
    return 0;
}
