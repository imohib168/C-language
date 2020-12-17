#include <stdio.h>

int main()
{

    int noOfRows, noOfCol, row, col;

    noOfRows = 5;
    noOfCol = 10;

    for (row = 1; row <= noOfRows; row++)
    {
        for (col = 1; col <= noOfCol; col++)
        {
            if (row == 1 || row == noOfRows || col == 1 || col == noOfCol)
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