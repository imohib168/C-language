#include <stdio.h>

int main()
{
    int num;
    num = 0;

    if (num > 0)
    {
        printf("%d is positive", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative", num);
    }
    else
    {
        printf("Number entered by the user is 0");
    }

    return 0;
}