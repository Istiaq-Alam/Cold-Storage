/*implementing the code that will display the above menu and whenever we select any option from (a) to (d) it will display the corresponding task.
So,I used here switch statement.*/
#include <stdio.h>
int main ()
{
    char M;
    printf("\tMENU\n");
    printf("Loop Problem solving:\n");
    printf("(a) Display the numbers 1 to 10 using for loop\n(b) Display sum from 1 to 10 using for loop\n(c) Display even numbers from 7 to  47\n(d) Display the average of the values from 1 to 10\n");

    printf("Enter your problem number:");
    scanf("%c",&M);

    switch(M)
  {
    case 'a':
        {
            printf("\n\tSolving Loop Problem (a)\n");
            int i;
            printf("Displaying the numbers 1 to 10 using for loop\n");
            for(i=1; i<11; i++)
            printf("\t%d\n",i);
        }
    break;

    case 'b':
        {
            printf("\n\tSolving Loop Problem (b)\n");
            int i,sum=0;
            printf("Displaying sum from 1 to 10 using for loop\n");
            for(i=1; i<11; i++)
            {
                sum=sum+i;
                //printf("\t%d\n",i);
            }
            printf("\tThe sum is: %d",sum);
        }
    break;

    case 'c':
        {
            printf("\n\tSolving Loop Problem (c)\n");
            int i;
            printf("Even numbers between 7 to 47\n");

            for(i=7; i<= 47; i++)
            {
                if(i%2 == 0)
                {
                    /* i is even, print it */
                    printf("%d ",i);
                }
            }
        }
    break;

    case 'd':
        {
            printf("\n\tSolving Loop Problem (d)\n");
            int i,n,sum=0;
            float avg;
            printf("Displaying the average of the values from 1 to 10\n");
            for (i=1;i<=10;i++)
            {
                if(i<11)
                {
                    sum=i+sum;
                }
            }
            avg=sum/10.0;
            printf("The sum from 1 to 10 is : %d\nThe Average is : %f\n",sum,avg);
        }
    break;
  }
    return 0;
}
