//Calculator other way using switch case
#include <stdio.h>
int main()

{
    char x;
    int a,b,Sum,sub,multi,div,mod;
    printf("Calculator!!\n");
    scanf("%d",&a);
    scanf("%c",&x);
    scanf("%d",&b);

    switch(x)
    {
        case '+':
            printf("Summation of two numbers %d",Sum=a+b);
        break;

        case '-':

            printf("Substraction of two numbers %d",(a>b)? (sub=a-b) : (sub=b-a));

        break;

        case '*':
            printf("Multiplication of two numbers %d",multi=a*b);
        break;

        case '/':
            printf("Division of two numbers %d",(a>b) ? (div=a/b) : (div=b/a) );
        break;

        case '%':
            (a>b)? (mod=a%b) : (mod= b%a);
            printf("Modulodivision of two numbers %d",mod);
        break;

        default :
        printf("your value is not valid");

        return 0;
    }

}

