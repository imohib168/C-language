#include <stdio.h>

int main()
{

    int i, j, num;

    num = 4;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}