#include <stdio.h>

int main()
{

    int row, space, col, noOfRows, noOfCol;

    printf("Enter No of rows: ");
    scanf("%d", &noOfRows);

    printf("Enter No of Columns: ");
    scanf("%d", &noOfCol);

    for (row = 1; row <= noOfRows; row++)
    {
        for (space = 1; space < row; space++)
        {
            printf(" ");
        }

        for (col = 1; col <= noOfCol; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}