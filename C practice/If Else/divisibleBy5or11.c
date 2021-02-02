#include <stdio.h>

int main()
{
    int num;
    num = 22;

    if ((num % 5 == 0))
    {
        printf("%d is divisible By 5", num);
    }
    else if ((num % 11 == 0))
    {
        printf("%d is divisible By 11", num);
    }

    return 0;
}