//checks whether a character entered by the user is a vowel or not by using the switch case statement
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

 switch(ch)
 {
 case 'a':
 printf("Entered Alphabet is Vowel");
 break;
 case 'e':
 printf("Entered Alphabet is Vowel");
 break;
 case 'i':
 printf("Entered Alphabet is Vowel");
 break;
 case 'o':
 printf("Entered Alphabet is Vowel");
 break;
 case 'u':
 printf("Entered Alphabet is Vowel");
 break;
 case 'A':
 printf("Entered Alphabet is Vowel");
 break;
 case 'E':
 printf("Entered Alphabet is Vowel");
 break;
 case 'I':
 printf("Entered Alphabet is Vowel");
 break;
 case 'O':
 printf("Entered Alphabet is Vowel");
 break;
 case 'U':
 printf("Entered Alphabet is Vowel");
 break;
 default:
 printf("Consonant");
 }
 return 0;
}
