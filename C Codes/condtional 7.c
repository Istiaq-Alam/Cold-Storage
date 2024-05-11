//Write a C program to input a character and check whether the character is alphabet or not
#include <stdio.h>
int main()
{
    char x;
    printf("Enter your character:");
    scanf("%c",&x);

    (x>='a' && x<='z') || (x>='A' && x<='Z') ?
    printf("The character is a:%c",x) : printf("The character is not an alphabet:%c",x);
    return 0;
}
