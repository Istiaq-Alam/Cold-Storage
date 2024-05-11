//Compute the sum of the series  1+x/2!+x^2/4!+x^3/6!+....x^n/2n! in C
#include <stdio.h>
#include <math.h>

int main()
{
	int x,n,i,fact=1;
	float sum=0;
	
    printf("Enter the value of x: ");
	scanf("%d",&x);	
	
    printf("Enter total number of terms: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++){
        if (n > 0)
         {
        for (i = 1; i <= n; ++i) {
             fact *= i;
        }
        
    }   
		sum += 1+(pow(x,i)/fact);
	}
	
	printf("Sum of the series: %f\n",sum);
	return 0;
}
/*if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
*/