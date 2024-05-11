#include<stdio.h>

int main ()
{
    int a,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    printf("notes of taka: TK. 1000,500,100,50,20,10,5,2,1\n");
    printf("Enter the amount:");
    scanf("%d",&a);

     printf("Total number of notes:");

    if(a>=1000)
    {
        b=a/1000;
        a=a%1000;
    }

    if(a>=500)
    {
        c=a/500;
        a=a%500;

    }

    if(a>=200)
    {
        d=a/200;
        a=a%200;

    }

    if(a>=100)
    {
        e=a/100;
        a=a%100;

    }

     if(a>=50)
    {
        f=a/50;
        a=a%50;

    }

     if(a>=20)
    {
        g=a/20;
        a=a%20;

    }

     if(a>=10)
    {
        h=a/10;
        a=a%10;

    }

     if(a>=5)
    {
        i=a/5;
        a=a%5;

    }

     if(a>=2)
    {
        j=a/2;
        a=a%2;

    }

     if(a>=1)
    {
        k=a/1;
        a=a%1;

    }


    printf("\n 1000:%d \n 500:%d \n 200:%d \n 100:%d \n 50:%d \n 20:%d \n 10:%d \n 5:%d \n 2:%d \n 1:%d",b,c,d,e,f,g,h,i,j,k);



    return 0;
}


