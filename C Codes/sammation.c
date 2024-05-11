//Summation of 2 numbers
#include <stdio.h>
//function main begins program execution
int main()
{
    int x, y, sum; //assigning variables
    printf("Enter your first number:\n"); //user prompt
    scanf("%d", &x); //taking input from user
    printf("Enter your 2nd number:\n"); //user prompt
    scanf("%d", &y); //taking input from user

    sum=x+y; //summation of 2 numbers

    printf("The summation is:%d\n",sum); //showing output

    return 0;//indicate that program ended successfully

}//end function main
