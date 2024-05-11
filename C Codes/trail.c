#include <stdio.h>
int main()
{
    float radius,area,PI=3.14159;

    printf("Please enter the radius of a circle\n");
    scanf("%f",&radius);

    area = PI*radius*radius;

    printf("The area of the circle is : %f\n",area);
}

