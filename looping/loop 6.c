//display the n terms of odd natural number and their sum
#include <stdio.h>
int main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}

