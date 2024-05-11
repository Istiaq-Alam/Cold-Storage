//* star looping triangle *-*
#include <stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter triangle line numbers:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
