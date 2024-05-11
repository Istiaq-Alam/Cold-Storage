/*Making a comparison between 2 numbers with the conditional operator. If the first number is greater than the second, perform a
division operation otherwise multiplication operation*/
#include <stdio.h>

int main()
{
    int x,y,div,multi;
    printf("Enter your first number:");
    scanf("%d",&x);
    printf("Enter your second number:");
    scanf("%d",&y);

    (x>y) ? printf("the division of 2 numbers:%d",div=x/y) : printf("the multiplication of 2 numbers:%d",multi=x*y);
    return 0;


}
