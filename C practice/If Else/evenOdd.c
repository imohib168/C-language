#include <stdio.h>

int main()
{
    int num;
    num = 11;

    if ((num % 2 == 0))
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }

    return 0;
}