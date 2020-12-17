#include <stdio.h>
int main()
{
    int row, col, noOfRows;

    noOfRows = 5; // Can take number from user

    for (row = noOfRows; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}