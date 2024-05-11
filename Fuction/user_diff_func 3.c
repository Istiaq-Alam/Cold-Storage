//Even Odd (user define function)
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    printf("");
    scanf("%d",&a);

    if(a%2==0)
        even();
    else
        odd();
}
even(int a)
{
    printf("The entered number is Even.");
}
odd(int a)
{
    printf("The entered number is Odd.");
}
