//display the cube of the number up to given an integer
#include <stdio.h>
int main()
{
    int a[100],i,c=0,n;
    printf("Enter numbers\n",n);

    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        {c=a[i]*a[i]*a[i];

    printf("The number %d's Cube is: %d\n",a[i],c);}



    return 0;

}
