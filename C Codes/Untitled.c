#include <stdio.h>

int main() //main function

{
    int x, y, a, b;

    printf("Enter the value of A:\n");
    scanf("%d",&x);

    printf("Enter the value of:B\n");
    scanf("%d",&y);

    a=y-x;
    b=x-y;

    printf("your value of A=%d\n",a);
    printf("your value of B=%d",b);


    return 0;
}
