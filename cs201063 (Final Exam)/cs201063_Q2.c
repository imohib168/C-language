#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 * 3; j++)
        {
            if (i == 0 || i == 5 - 1 || j == 0 || j == 14)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}