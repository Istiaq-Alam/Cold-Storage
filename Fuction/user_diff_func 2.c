//swiping value by user define function
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the value of A=");
    scanf("%d",&a);
    printf("enter the value of B=");
    scanf("%d",&b);
    printf("Before swapping: A =%d , B =%d\n",a,b);

    swipe();
    d=swipe(a);
    e=swipe(b);


    printf("After swapping:  A=%d , B=%d", d,e);
}

int swipe(int a,int b,int c)
{
    c=a;
    a=b;
    b=c;

    return(a,b);
}
