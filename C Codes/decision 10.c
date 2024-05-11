#include<stdio.h>

int main ()
{
    int m,p,c,total,mp;
    printf("Mark in math:");
    scanf("%d",&m);
    printf("Mark in physics:");
    scanf("%d",&p);
    printf("Mark in chemistry:");
    scanf("%d",&c);

    total= m+p+c;
    mp= m+p;
    printf("Your total marks is:%d\n",total);

    if(m>=60 && p>=50 && c>=40 && total>=200 ||  mp>=150)
        printf("You are eligible candidates");

    else
        printf("You are not eligible");

    return 0;


}
