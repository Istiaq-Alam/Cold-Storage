//summation, subtraction, Multiplication, Division
#include <stdio.h>
//function main begins program execution
int main()
{
    int x, y, sum, sub, multi, div; //assigning variables
    printf("Enter your first number:\n");//user prompt
    scanf("%d", &x);//taking input from user
    printf("Enter your 2nd number:\n");//user prompt
    scanf("%d", &y);//taking input from user
    sum=x+y; //summation of 2 numbers
    sub=x-y; //subtraction of 2 numbers
    multi=x*y; //multiplication of 2 numbers
    div=x/y; //division of 2 numbers
    printf("The summation is:%d\n",sum); //showing output
    printf("The subtraction is:%d\n",sub);
    printf("The multiplication is:%d\n",multi);
    printf("The division is:%d",div);
return 0; //indicate that program ended successfully

}//end function main

