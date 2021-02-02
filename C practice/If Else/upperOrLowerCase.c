#include <stdio.h>

int main()
{
    char ch;
    ch = 'a';

    if (ch >= 65 && ch <= 90)
    {
        printf("Given Input is Upper Case Alphabet");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Given Input is lower Case Alphabet");
    }

    return 0;
}