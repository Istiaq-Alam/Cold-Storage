#include <stdio.h>

int main() //main function

{
    int x, y, area; //assign 2 integers

    printf("Enter the height of triangle:\n"); //print user statement
    scanf("%d", &x); //taking user input

    printf("Enter the land of triangle:\n");
    scanf("%d", &y);

    area=(x*y)*1/2;

    printf("the are of the triangle is: %d\n", area);

    return 0;

}
