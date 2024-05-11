//problem
#include <stdio.h>
int main()
{
    int x,y,area,square,triangle;

    printf("Enter the length or height value :\n");
    scanf("%d", &x);

    printf("Enter the width value of the room:\n");
    scanf("%d", &y);

    area=x*y;
    printf("The area of the rectangle shaped room is:%d\n", area);
    square=x*x;
    printf("The area of the square is:%d\n", square);
    triangle=0.5*(x*y);
    printf("The area of the triangle is:%d\n", triangle);

    return 0;
}

