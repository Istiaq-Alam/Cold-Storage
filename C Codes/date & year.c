#include <stdio.h>

int main ()
{
int months, days, year;
printf("Enter days\n") ;
scanf("%d", &days) ;

year=days/365;
days= days%365;
months= days/30;
days=days%30;

printf("year=%d Months = %d Days = %d",year, months, days) ;

return 0;
}
