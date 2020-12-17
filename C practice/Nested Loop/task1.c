#include <stdio.h>

int main()
{

    for (int x = 1; x < 10; x++)
        for (int y = 2; y <= 6; y++)
            printf("It %d * %d = %d \n", x, y, x * y);

    return 0;
}