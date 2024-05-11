#include<stdio.h>
int main()
{
    int i,n1=0,n2=1,n3,n,div=0;
    printf("Enter Your number: ");
    scanf("%d",&n);

        for(i=0;i<n-1;i++) //loop starts from 0     
            {    
                n3=n1+n2;    
                n1=n2;    
                n2=n3;    
              
                if ((n%n3)==0) // Check if n is divisible by the current Fibonacci number
                {
                    ++div;
                }
        
            }
         
    printf("Fibonacci Numbers are 1,2,3,5,8,13,21,34...\n");
    printf("So Number of Fibonacci divisors of %d : %d",n,div);
    return 0;
}
