//The price of 2 cows and 3 goats together 98050 Taka. The price of 1 goat is 6800 taka. what is the price of one cow
#include <stdio.h>
int main()
{
    float cg,c,g;
    printf("Enter the price of 2 cows and 3 goats together: ");
    scanf("%f",&cg);
    printf("Enter the price of 1 goat: ");
    scanf("%f",&g);

    g=3*g;
    c=cg-g;
    c=c/2;

    printf("The price of one cow is %f",c);

    return 0;

}
