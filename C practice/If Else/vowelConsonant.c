#include <stdio.h>

int main()
{
    char ch;
    ch = 'A';

    if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
    {
        printf("It's a Vowel");
    }
    else
    {
        printf("It's a consonant");
    }

    return 0;
}