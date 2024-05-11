#include <stdio.h>

int main() //main function

{
    int x, y, sum, sub, multi, div; //assign 2 integers

    printf("Enter your 2 numbers:\n"); //print user statement
    scanf("%d %d", &x, &y); //taking user input

    sum=x+y; //summation of 2 numbers
    sub=x-y;
    multi=x*y;
    div=x/y;

    printf("Your summation is: %d\n", sum);
    printf("Your subtraction is: %d\n", sub);
    printf("Your multiplication is: %d\n", multi);
    printf("Your division is: %d\n", div);


    return 0;

}
