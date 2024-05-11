//determine square value by user define function
#include <stdio.h>
int main()
{
    int a, result;
    printf("Going to calculate the square value\n");
    printf("Input any number of square:");
    scanf("%d",&a);
    result=sum(a);
    printf("The square of %d is:%d",a,result);
}

int sum(int a)
{
    return (a*a);

}
