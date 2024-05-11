//Lab report 05
//All Code till now
#include <stdio.h>
#include <conio.h>
int main()
{
    int l;
    printf("\tLab report Menu\n");
    printf("1. Lab-1 Problems\n2. Lab-2 Problems\n3. Lab-3 Problems\n4. Lab-4 Problems\n");
    printf("Enter your Lab Number:");
    scanf("%d",&l);
    printf("\n");

    switch(l)
    {
        case 1:
        {
            int p;
    printf("\tProblems Menu of Lab-1\n");
    printf("Problem No.1\n");
    printf("Problem No.2\n");
    printf("Problem No.3\n");
    printf("Enter your Problem No:");
    scanf("%d",&p);
    printf("\n");

            switch(p)
            {
                case 1:
                {
    printf("Solving Problem 1\n");
    printf("\tHello World\n");}
                break;

                case 2:
                {
    printf("\tSolving Problem 2\n");
    int x, y, sum;
    printf("Enter your first number:");
    scanf("%d", &x);
    printf("Enter your 2nd number:");
    scanf("%d", &y);
    sum=x+y;
    printf("The summation is:%d\n",sum);

}
                break;

                case 3:
                {
    printf("\tSolving Problem 3\n");
    int x, y, sub;
    printf("Enter your 1st number:");
    scanf("%d", &x);
    printf("Enter your 2nd number:");
    scanf("%d", &y);
    sub=x-y;
    printf("The summation is:%d\n",sub);

}
                break;

                default:
    printf("\tInvalid Problem Menu");
        break;
}
}
break;
    case 2:
{
       int p;
    printf("\tProblems Menu of Lab-2\n");
    printf("Problem No.1\n");
    printf("Problem No.2\n");
    printf("Problem No.3\n");
    printf("Problem No.4\n");
    printf("Problem No.5\n");
    printf("Problem No.6\n");
    printf("Enter your Problem No:");
    scanf("%d",&p);
    printf("\n");

    switch(p)
{
    case 1:
{
     printf("\tSolving Problem 1\n");
    float x, y, div;
    printf("Enter your 2 numbers:\n");
    scanf("%f %f", &x, &y);
    div=x/y;
    printf("Your division is: %f\n", div);
}
    break;

    case 3:
{
    printf("\tSolving Problem 3\n");
    int x;
    float c,f;
    printf("Converter!! \n press 1 for convert Celsius to Fahrenheit \n press 2 for convert  Fahrenheit to Celsius \n");
    scanf("%d", &x);

    switch(x)
{
        case 1 :
        //float c, f;
        printf("Enter the Celsius value:");
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf("The Fahrenheit value is:%f",f);
        break;

        case 2:
        //float f,c;
        printf("Enter the Fahrenheit value:");
        scanf("%f",&f);
        c=((f-32)*5)/9;
        printf("The Celsius value is:%f",c);
        break;

        default :
        printf("your value is not valid");
        break;
}
        break;
}
    case 2:
    {
        printf("\tSolving Problem 2\n");
         int x,h,e,a,b,t,r,s,c;
    printf("Enter 1 for area of triangle \n Enter 2 for are of rectangle \n Enter 3 for are of square \n Enter 4 for area of circle\n Enter 5 for area of cube\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1 :
        printf("Enter the height value of the triangle : ");
        scanf("%d", &h);
        printf("Enter the edge value of the triangle: ");
        scanf("%d", &e);
        t=0.5*(h*e);
        printf("The area of the triangle is:%d",t);
        break;

        case 2:
        printf("Enter the length value of the rectangle: ");
        scanf("%d", &a);
        printf("Enter the width value of the rectangle: ");
        scanf("%d", &b);
        r=a*b;
        printf("The area of the rectangle is:%d",r);
        break;

        case 3:
        printf("Enter the edge of the square : ");
        scanf("%d", &a);
        s=a*a;
        printf("The area of the square is:%d", s);
        break;

        case 4:
        printf("Enter the radius :\n");
        scanf("%d", &a);
        c=3.1416*(a*a);
        printf("The area of the Circle is:%d", s);
        break;

        case 5:
        printf("Enter the edge of the cube : ");
        scanf("%d", &a);
        s=a*a*a;
        printf("The area of the cube is:%d", c);
        break;



        default :
        printf("your value is not valid");


}
}
    break;

    case 4:
    {
            printf("\tSolving Problem 4\n");
            int a, b;
            printf("Enter the value of A=");
            scanf("%d",&a);
            printf("enter the value of B=");
            scanf("%d",&b);
            a=a;
            b=b-a;
            a=a+b;

            printf("A=%d \nB=%d", a,b);
}
    break;

    case 5:
    {
            printf("\tSolving Problem 5\n");
             int x, y, z, p;

     printf("Enter number of people in the village last year:");
     scanf("%d", &x);
     printf("Enter the number of people moving in:");
     scanf("%d", &y);
     printf("Enter the number of people moving out:");
     scanf("%d", &z);
     p = (x + y) - z;

     printf("Number of people this year is : %d", p);

}
    break;

    case 6:
    {
        printf("\tSolving Problem No. 6\n");
         float paid, beef, mutton, change;
 printf("Amount being paid: ");
 scanf("%f", &paid);
 printf("Kilos of beef getting bought: ");
 scanf("%f", &beef);
 printf("Kilos of mutton getting bought: ");
 scanf("%f", &mutton);
 change = paid - (beef * 700 + mutton * 800);
 printf("Amount of change is : %f", change);
}
    break;

    default :
    printf("\tInvalid Problem Menu\n");
    break;
}
break;
    case 3:
    {
        int p;
    printf("\tProblems Menu of Lab-3\n");
    printf("Problem No.1\n");
    printf("Problem No.2\n");
    printf("Problem No.3\n");
    printf("Problem No.4\n");
    printf("Enter your Problem No:");
    scanf("%d",&p);
    printf("\n");

    switch(p)
    {
        case 1:
        {
             printf("\tSolving Problem 1\n");
             int x,y;
 printf("Enter your first number:");
 scanf("%d",&x);
 printf("Enter your second number:");
 scanf("%d",&y);
 (x>y) ? printf("The largest number is:%d",x) : printf("The largest number is:%d",x);
         }
     break;

        case 2:
        {
            printf("\tSolving Problem 2\n");
            int x;
 printf("Enter your first number:");
 scanf("%d",&x);
(x>0) ? printf("The number is positive +%d",x) : printf("The number is negative %d",x);
        }
        break;

        case 3:
        {
            printf("\tSolving Problem 3\n");
            int x;
 printf("Enter your first number:");
 scanf("%d",&x);
 (x%2==0) ? printf("The number is even: %d",x) : printf("The number is odd: %d",x);
        }
        break;

        case 4:
        {
            printf("\tSolving Problem 4\n");
            int item;
 printf("Enter the number of item:");
 scanf("%d",&item);
 printf("you have %d item%s",item,(item==1) ? "" : "s");
        }
        break;

    default :
    printf("\tInvalid Problem Menu\n");
    break;
}
        break;

    case 4:
{
        int p;
    printf("\tProblems Menu of Lab-4\n");
    printf("Problem No.1\n");
    printf("Problem No.2\n");
    printf("Problem No.3\n");
    printf("Problem No.4\n");
    printf("Problem No.5\n");
    printf("Problem No.6\n");
    printf("Problem No.7\n");
    printf("Problem No.8\n");
    printf("Problem No.9\n");
    printf("Problem No.10\n");
    printf("Enter your Problem No:");
    scanf("%d",&p);
    printf("\n");

    switch(p)
{
        case 1:
        {
        printf("\tSolving Problem 1\n");
        int x,y;
 printf("Enter your length of the rectangle:");
 scanf("%d",&x);
 printf("Enter your length of the rectangle:");
 scanf("%d",&y);
 if(x==y)
 printf("This is a Square");
 else if(x>y || y>x)
 printf("This is a rectangle");
 else
 printf("your input is in valid");
    }
    break;

    case 2:
        {
            printf("\tSolving Problem 2\n");
            int x,y;
 printf("Enter Any two numbers:\n");
 scanf("%d %d",&x,&y);
 if(x>y)
 printf("The greatest number is %d",x);
 else if(y>x)
 printf("The greatest number is %d",y);
 else
 printf("Those number are equal");
        }
    break;

        case 3:
        {
            printf("\tSolving Problem 3\n");
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

    }
    break;

        case 4:
        {
            printf("\tSolving Problem 4\n");
            int x,y;
 printf("Enter the amount of your quantity:");
 scanf("%d",&y);
 x= y*100;
 if(x>1000)
 {
 y= (x*10)/100;
 y= x-y;
 printf("Discount cost is %d",y);
 }
 else
 printf("You have no Discount..\n Total cost %d",x);
        }
    break;

        case 5:
        {
            printf("\tSolving Problem 5\n");
            int x,y,z;
 printf("Enter your salary:");
 scanf("%d",&x);
 printf("Enter year of service:");
 scanf("%d",&y);
 if(y>5)
 {
 z=(x*5)/100;
 z=x+z;
 printf("The bonus amount of employee is: %d",z);
 }
 else
 printf("Sorry you have no bonus...");

        }
     break;

        case 6:
        {
            printf("\tSolving Problem 6\n");
            int x,y,z;
 printf("Enter the 1st age:\n");
 scanf("%d",&x);
 printf("Enter the 2nd age:\n");
 scanf("%d",&y);
 printf("Enter the 3rd age:\n");
 scanf("%d",&z);
 if(x>y && x>z)
 {printf("1st person is Oldest person\n");
 (y<z)? printf("2nd person is youngest\n"):printf("3rd person is youngest\n");}
 else if(y>x && y>z)
 {printf("2nd person is Oldest person\n");
 (x<z)? printf("1st person is youngest\n"):printf("3rd person is youngest\n");}
 else if(z>x && z>y)
 {printf("3rd person is Oldest person\n");
 (x<y)? printf("1st person is youngest\n"):printf("2nd person is youngest\n");}
 else
 printf("Those number are equal");

        }
    break;

        case 7:
        {
            printf("\tSolving Problem 7\n");
            int x,y;
 printf("INPUT:");
 scanf("%d",&x);
 if(x<0)
 printf("OUTPUT:%d",x*-1);
 else
 printf("OUTPUT:%d",x);
        }
     break;

        case 8:
        {
            printf("\t\nSolving Problem 8\n");
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
        }
    break;

        case 9:
        {
            printf("\tSolving Problem 9\n");
            int y;
 printf("Enter year:");
 scanf("%d",&y);
 if(y%4==0)
 printf("This year %d is Leap year",y);
 else if(y==2000 || y==1900 || y==2100)
 (y%400==0)? printf("This year %d is Leap year",y) : printf("This year %d is not Leap year",y);
 else
 printf("This year %d is not a Leap year",y);
    }
    break;

        case 10:
        {
            printf("\tSolving Problem 10\n");
            int m,p,c,total;
 printf("Mark in math:");
 scanf("%d",&m);
 printf("Mark in physics:");
 scanf("%d",&p);
 printf("Mark in chemistry:");
 scanf("%d",&c);
 total= m+p+c;
 printf("Your total marks is:%d\n",total);
 if(m>=60 && p>=50 && c>=40 && total>=200)
 printf("You are eligible candidates");
 else
 printf("You are not eligible");
        }
        break;

    default :
    printf("\tInvalid Problem Menu\n");
    return 0;
}
}
}
}
    break;

    default :
    printf("\tInvalid lab Menu\n");
    break;
}
        return 0;
}
