//Calculator using switch case
#include <stdio.h>
int main()
{
    char x;
    int a,b,Sum,sub,multi,div,mod;
    printf("Calculator!! \n press + for Summation \n press - for Substraction\n press * for multiplication \n press / for division \n press %c for modulodivision\n",37);
    scanf("%c", &x);

    switch(x)
    {
        case '+':
            printf("Enter two numbers\n");
            scanf("%d %d", &a,&b);
            Sum=a+b;
            printf("Summation of two numbers %d",Sum);
        break;

        case '-':
            printf("Enter two numbers\n");
            scanf("%d %d", &a,&b);
            (a>b)? (sub=a-b) : (sub=b-a) ;
            printf("Substraction of two numbers %d",sub);

        break;

        case '*':
            printf("Enter two numbers\n");
            scanf("%d %d", &a,&b);
            multi=a*b;
            printf("Multiplication of two numbers %d",multi);
        break;

        case '/':
            printf("Enter two numbers\n");
            scanf("%d %d", &a,&b);
            (a>b) ? (div=a/b) : (div=b/a) ;
            printf("Division of two numbers %d",div);
        break;

        case '%':
            printf("Enter two numbers\n");
            scanf("%d %d", &a,&b);
            (a>b)? (mod=a%b) : (mod= b%a);
            printf("Modulodivision of two numbers %d",mod);
        break;

        default :
        printf("your value is not valid");

        return 0;
    }

}
