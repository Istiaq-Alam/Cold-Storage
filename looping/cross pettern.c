/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n||j==1||j==n-i+1||i==j||j==n)
            {
            printf("*");
            }
            else
            {

                      printf(".");
                  }

            }
        printf("\n");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int n = 10;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && i + j < n - 1 || i == n - j - 1 && i + j >= n - 1 || i + j == n - 1 && i <= j)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }

    return 0;
}


