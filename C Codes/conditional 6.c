//Find the largest among three numbers using the conditional operator
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter your 3 numbers:\n");
    scanf("%d %d %d",&x,&y,&z);

    (x>y) ?
        ((x>z) ?
        printf("The largest number is %d",x):printf("The largest number is %d",z)):
        ((y>z) ?
        printf("The largest number is %d",y):printf("The largest number is %d",z));
    return 0;
}

