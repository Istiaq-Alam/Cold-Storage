#include<stdio.h>

int main ()
{
    int x,y,z;
    printf("Enter the 1st age:");
    scanf("%d",&x);
    printf("Enter the 2nd age:");
    scanf("%d",&y);
    printf("Enter the 3rd age:");
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

    return 0;


}


