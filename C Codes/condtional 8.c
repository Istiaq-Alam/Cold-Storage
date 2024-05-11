#include <stdio.h>

int main()
{
    int x;
    printf("Enter your year:");
    scanf("%d",&x);
(x%4==0 && x%100!=0) || (x%400==0) ? printf("the year %d is leap year",x):printf("the year %d is a common year",x);

    return 0;
}
