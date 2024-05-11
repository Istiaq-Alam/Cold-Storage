//C to F using switch case
#include <stdio.h>
int main()
{
    int x;
    float c,f;
    printf("Converter!! \n press 1 for convert Celsius to Fahrenheit \n press 2 for convert Fahrenheit to Celsius \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1 :
        //float c, f;
        printf("Enter the Celsius value:");
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf("The Fahrenheit value is:%f",f);
        break;

        case 2:
        //float f,c;
        printf("Enter the Fahrenheit value:");
        scanf("%f",&f);
        c=((f-32)*5)/9;
        printf("The Celsius value is:%f",c);
        break;

        default :
        printf("your value is not valid");

        return 0;
    }

}
