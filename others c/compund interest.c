#include<stdio.h>
int main()
{
    int P, T;
    float C,R;

    printf("Enter the principle amount:");
    scanf("%d",&P);
    printf("Enter the Rate on principle:");
    scanf("%f",&R);
    printf("Enter the year:");
    scanf("%d",&T);

    R=R/100;
    P=P*(1+R);
    C=pow(P,T);

    printf("Compund Interest is: %f",C);
}