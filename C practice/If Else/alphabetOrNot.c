#include <stdio.h>

int main()
{
    char ch;
    ch = '1';

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'Z' && ch <= 'Z'))
    {
        printf("Entered Input is a Character");
    }
    else
    {
        printf("Entered input is not a Character");
    }
    return 0;
}