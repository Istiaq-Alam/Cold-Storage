#include <stdio.h>

int main()
{
     int x, y, z, p;

     printf("Enter number of people in the village last year:");
     scanf("%d", &x);
     printf("Enter the number of people moving in:");
     scanf("%d", &y);
     printf("Enter the number of people moving out:");
     scanf("%d", &z);
     p = (x + y) - z;

     printf("Number of people this year is : %d", p);
     return 0;
}
