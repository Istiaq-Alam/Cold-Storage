#include <stdio.h>

int main()

{
    int a,b;
    printf("Please Enter any 2 numbers\n");
    scanf("%d %d", &a, &b);

    if(a>b)
        printf("The largest number is: %d\n",a);

    else if (b>a)
        printf("The largest number is: %d\n",b);

    else
        printf("the numbers are equal\n");



return 0;

}


