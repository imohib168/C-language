#include <stdio.h>

int main()
{
    char userCharacter;
    int chToAscii;

    printf("\nEnter any Character/digit/special Character: ");
    scanf("%c", &userCharacter);

    chToAscii = userCharacter;

    if (chToAscii >= 65 && chToAscii <= 90)
    {
        printf("%c is Capital letter", userCharacter);
    }
    if (chToAscii >= 97 && chToAscii <= 122)
    {
        printf("%c is Small letter", chToAscii);
    }
    if (chToAscii >= 48 && chToAscii <= 57)
    {
        printf("%c is digit", chToAscii);
    }
    if ((chToAscii >= 0 && chToAscii <= 47) || (chToAscii >= 58 && chToAscii <= 64) || (chToAscii >= 91 && chToAscii <= 96) || (chToAscii >= 123 && chToAscii <= 127))
    {
        printf("%c is a special character", chToAscii);
    }

    return 0;
}