//The sum of ages of a Father and his daughter is 80 years. Father’s age is four times the age of the daughter. What are their ages?
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the sum of age of Father & his daughter: ");
    scanf("%d",&x);
    printf("How many times the age of the Father is the age of his daughter?\n");
    scanf("%d",&y);

    x=x/y;
    y=x*y;

    printf("Father age is %d\n",y);
    printf("Daughter age is %d\n",x);

    return 0;

}
