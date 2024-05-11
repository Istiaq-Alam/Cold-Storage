//Table of nth inputed number
#include<stdio.h>
int main()
{
    int n,i,t=0,x;
    printf("Enter your n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\ntable of %d\n",i);
        for(x=1;x<=10;x++)
        {
            t=x*i;
            printf("%d * %d = %d\n",x,i,t);
        }
    }
    return 0;
}


