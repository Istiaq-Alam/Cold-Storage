#include<stdio.h>

int main ()
{
    int x,y,z;
    printf("Number of classes held:");
    scanf("%d",&x);
    printf("Number of classes attented:");
    scanf("%d",&y);

    z=((y*100)/x);
    printf("Your attendance is %d%c\n",z,37);

    if(z>=75)
        printf("You will be allowed to sit in exam\n\n");
    else
        printf("You will not be allowed to sit in exam.\nBecause, your attendance is less then 75%c\n\n",37);


    return 0;


}
