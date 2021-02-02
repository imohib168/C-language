#include <stdio.h>

// ASCII Values
// 97 = 'a' 122 = 'z'
// 65 = 'A' 90 = 'Z'
// 48 = '0' 57 = '9'

int main()
{
    char ch;
    ch = 'e';

    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("It's a Alphabet");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("It's a digit");
    }
    else
    {
        printf("It's a Special Character");
    }
    return 0;
}