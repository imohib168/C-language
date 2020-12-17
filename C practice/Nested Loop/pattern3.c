#include <stdio.h>

int main()
{

    int num, b, row, col, space;

    num = 5;
    b = 13;

    for (row = 0; row <= num; row++)
    {
        for (space = 0; space <= row; space++)
        {
            for (col = 0; col <= b - row; col++)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}