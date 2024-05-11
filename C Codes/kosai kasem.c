#include <stdio.h>

int main()
{
     float paid, beef, mutton, change;

     printf("Amount being paid: ");
     scanf("%f", &paid);
     printf("Kilos of beef getting bought: ");
     scanf("%f", &beef);
     printf("Kilos of mutton getting bought: ");
     scanf("%f", &mutton);
     change = paid - (beef * 700 + mutton * 800);

     printf("Amount of change is : %f", change);

     return 0;
}
