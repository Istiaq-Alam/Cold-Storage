#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter your 2 numbers:\n");
    scanf("%d %d",&a,&b);
    //a=12,23,34;
    //b(12,23,34);

    printf("And operation of 2 numbers %d\n",a&b);
    printf("OR operation of 2 numbers %d\n",a||b);

    return 0;
}
