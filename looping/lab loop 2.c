//average of looping input 1-10
#include<stdio.h>
int main()
{
    int n,x,i,sum=0;
    float avg=0;
    printf("Average of inputed 10 numbers\n");


    for(i=1;i<=10;i++)
    {
        printf("Enter your %dth number:",i);
        scanf("%d",&n);
            sum=sum+n;
    }
     avg=sum/10.0;
    printf("The sum is: %d\n",sum);
    printf("The average is %f\n",avg);

    return 0;

}
