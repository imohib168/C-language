#include <stdio.h>

int main()
{
    int a, b, c;
    a = 9;
    b = 7;
    c = 14;

    if (a > b && a > c)
    {
        printf("A is greater than B and C");
    }
    else if (b > a && b > c)
    {
        printf("B is greater than A and C");
    }
    else
    {
        printf("C is greater than A and B");
    }

    return 0;
}