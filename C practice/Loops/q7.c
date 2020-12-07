#include <stdio.h>

int main()
{

    int i, count = 10, sum = 0;

    for (i = 1; i <= count; i += 2)
    {
        sum += i;
        printf("%d \n", i);
    }

    printf("Sum of Odd Natural Number given by user is: %d", sum);

    return 0;
}