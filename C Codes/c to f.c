//problem 7
#include <stdio.h>
int main()
{
    int x;
    printf("Converter!! \n press 1 for convert Celsius to Fahrenheit \n press 2 for convert Fahrenheit to Celsius \n");
    scanf("%d", &x);

    if(x==1)
    {
        float c, F;
        printf("Enter the Celsius value:\n");
        scanf("%f",&c);
        F=(1.8*c)+32;
        printf("The Fahrenheit value is:%f",F);
    }
    else if(x==2)
    {
        float f,C;
        printf("Enter the Fahrenheit value:\n");
        scanf("%f",&f);
        C=((f-32)*5)/9;
        printf("The Celsius value is:%f",C);
    }
    else
        printf("your value is not valid");


}
