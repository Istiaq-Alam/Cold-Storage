//Table of inputed number
#include<stdio.h>
int main()
{
    int n,i,t=0;
    printf("Enter your n:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d * %d = %d\n",n,i,t);
    }
    return 0;
}

