#include<stdio.h>

int main ()
{
    int x,y;
    printf("INPUT:");
    scanf("%d",&x);

    if(x<0)
        printf("OUTPUT:%d",x*-1);
    else
        printf("OUTPUT:%d",x);

    return 0;


}


