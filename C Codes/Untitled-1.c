#include<stdio.h>
int main()
{
	int x;
	printf("Enter your powpow");
	scanf("%d",&x);

	if(x==0)
        printf("zero\n");
    else if(x<1)
        printf("One");
    else
        printf("00 Powpow");


	return 0;
}
