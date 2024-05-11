#include <stdio.h> //library function

int main()
{
    int x, y, sum; //assign integer number
    printf("Enter your first number:\n"); //pc will ask me for 1st number
    scanf("%d", &x); //input the 1st number

    printf("Enter your 2nd number:\n");//pc will ask me for 2nd number
    scanf("%d", &y); //input the 2nd number

    sum=x+y; //summation of 2 numbers
    printf("The sum is:%d",sum); //print the output

    return 0;

}

