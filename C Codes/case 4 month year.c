//convert a given year into month,day
#include<stdio.h>
int main()
{
 int m,years,months,days,hours,minutes,seconds;
 printf("Select your choice to convert a year into:\n");
 printf("1.Month\n2.Days\n3.Hours\n4.Minutes\n5.Seconds\n");
 printf("Enter your choice:");
 scanf("%d",&m);
 printf("\nEnter the number of years:");
 scanf("%d",&years);
 switch(m)
 {
 case 1:
    {
        months = 12 * years;
        printf("\n%d years = %d Months",years,months);
    }
 break;
 case 2:
    {
        days = 365 * years;
        printf("\n%d years = %d Days",years,days);
    }
 break;
 case 3:
    {
        hours = 24 * 365 * years;
        printf("\n%d years = %d Hours",years,hours);
    }
 break;
 case 4:
    {
         minutes = 60 * 24 * 365 * years;
         printf("\n%d years = %d minutes",years,minutes);
    }
 break;
 case 5:
    {
        seconds = 60 * 60 * 24 * 365 * years;
        printf("\n%d years = %d seconds",years,seconds);
    }
 default:
    printf("Invalid Menu");
 }
 return 0;
}
