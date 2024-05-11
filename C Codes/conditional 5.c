
#include <stdio.h>

int main()
{
    int item;
    printf("Enter your first number:");
    scanf("%d",&item);

    printf("you have %d item%s",item,(item==1) ? "" : "s");
    return 0;
}
