#include <stdio.h>

int main()
{

    int power = 0;
    int base = 3;
    int exp = 3;

    for (int i = 1; i <= exp; i--)
    {
        power *= power;
    }

    printf("%d", power);
    printf("%d", base);
    printf("%d", exp);

    return 0;
}