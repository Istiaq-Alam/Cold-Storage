//check whether the given number is odd or even
#include <stdio.h>

int main()
{
    int x;
    printf("Enter your first number:");
    scanf("%d",&x);

    (x%2==0) ? printf("The number is even: %d",x) : printf("The number is odd: %d",x);
    return 0;
}

