#include <stdio.h>
#include <ctype.h>

int main()
{
    char s;
    printf("Enter your String: ");
    scanf("%c",&s);

    printf("%c ", isdigit(s));

    return 0;
}
