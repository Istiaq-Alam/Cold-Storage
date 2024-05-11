#include<stdio.h>
#include<conio.h>

int  main()
{
    int x, y, temp;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
   // getch();
}
