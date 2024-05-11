//Display the average of the values loop
#include <stdio.h>
int main()
{
    int i,n,sum=0;
	int avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10;
	printf("The sum of 10 no is : %d\nThe Average is : %d\n",sum,avg);

}
