//Finding area of shape of you
#include <stdio.h>
int main()
{
    int x,h,e,a,b,t,r,s,c;
    printf("Enter 1 for area of triangle \n Enter 2 for are of rectangle \n Enter 3 for are of square \n Enter 4 for area of cicle\n Enter 5 for area of cube\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1 :
        printf("Enter the height value of the triangle : ");
        scanf("%d", &h);
        printf("Enter the edge value of the triangle: ");
        scanf("%d", &e);
        t=0.5*(h*e);
        printf("The area of the triangle is:%d",t);
        break;

        case 2:
        printf("Enter the length value of the rectangle: ");
        scanf("%d", &a);
        printf("Enter the width value of the rectangle: ");
        scanf("%d", &b);
        r=a*b;
        printf("The area of the rectangle is:%d",r);
        break;

        case 3:
        printf("Enter the edge of the square : ");
        scanf("%d", &a);
        s=a*a;
        printf("The area of the square is:%d", s);
        break;

        case 4:
        printf("Enter the radius :\n");
        scanf("%d", &a);
        c=3.1416*(a*a);
        printf("The area of the Circle is:%d", s);
        break;

        case 5:
        printf("Enter the edge of the cube : ");
        scanf("%d", &a);
        s=a*a*a;
        printf("The area of the cube is:%d", c);
        break;



        default :
        printf("your value is not valid");

        return 0;
    }

}
