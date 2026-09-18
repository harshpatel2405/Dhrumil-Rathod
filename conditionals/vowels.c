#include <stdio.h>

/*
7) Enter a character and identify:
    Vowel (a, e, i, o, u)
    Consonant
    Digit
    Special character
*/

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Entered charcter '%c' is Vowel", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Entered charcter '%c' is Digit", ch);
    }
    else
    {
        printf("Entered charcter '%c' is consonant or Special character..", ch);
    }
    return 0;
}