#include <stdio.h>

int main()
{
    int row, col, noOfRows;

    printf("Enter rows: ");
    scanf("%d", &noOfRows);

    for (row = 1; row <= noOfRows; row++)
    {
        for (col = 1; col <= noOfRows - row; col++)
        {
            printf(" ");
        }

        for (col = 1; col <= noOfRows; col++)
        {
            if (row == 1 || row == noOfRows || col == 1 || col == noOfRows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}