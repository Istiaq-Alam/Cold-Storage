// convert year to days months hours minute
#include <stdio.h>
int main()
{
    int year=1, months=12, days=365, hours, minutes, seconds;
    printf("Enter year:");
    scanf("%d", &year);

    if(year>0)
    {
    switch(year)
    {
        {
        case 1:
        months =year*12;
        days =days;
        hours =days*24;
        minutes=hours*60;
        seconds=minutes*60;
    }
        break;

        default:
    {
        months =year*12;
        days =months*30;
        hours =days*24;
        minutes=hours*60;
        seconds=minutes*60;
    }
        break;
    }
    printf(" Months=%d\n",months);
    printf(" days=%d\n",days);
    printf(" hours=%d\n",hours);
    printf(" minutes=%d\n",minutes);
    printf(" seconds=%d\n",seconds);
    }
    else
        printf("Invalid");



    return 0;



}
