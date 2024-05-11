//finding area of circle, rectangle, triangle
#include <stdio.h>
int main()
{
    printf("\tMenu of shapes\n");
    printf("Select your shapes:\n");
    printf("1.Area of circle.\n2.Area of reactangle.\n3.Area of tringle.\n\n");
    printf("Enter your choice:");
    int m,breadth,length,h,e;
    float radius,area;
    scanf("%d",&m);
    switch(m)
{
case 1:
    {
    printf("\tArea of circle\n");
    printf("Enter the radius:");
    scanf("%f",&radius);
    area = 3.142*radius*radius;
    printf("Area of a circle = %f\n", area);
    }
break;
case 2:
    {
    printf("\tArea of rectangle\n");
    printf("Enter the breadth and length:");
    scanf("%d %d", &breadth, &length);
    area = breadth*length;
    printf("Area of a Reactangle = %f\n", area);
    }
break;
case 3:
    {
    printf("\tArea of triangle\n");
    printf("Enter the height value of the triangle :");
    scanf("%d", &h);

    printf("Enter the edge value of the triangle :");
    scanf("%d", &e);

    area=0.5*(h*e);
    printf("The area of the triangle is:%d", area);
    }
break;

default:
    printf("\tInvalid Menu");
break;
}
}
