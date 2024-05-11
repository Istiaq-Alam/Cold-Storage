//problem 6
#include <stdio.h>
int main()
{
    int h,e,area;

    printf("Enter the height value of the triangle :\n");
    scanf("%d", &h);

    printf("Enter the edge value of the triangle:\n");
    scanf("%d", &e);

    area=0.5*(h*e);
    printf("The area of the triangle is:%d", area);

    return 0;
}
