#include <stdio.h>

// Don pass argument
// With no return

void area(int square);

int main()
{
    int square;
    printf("Enter the side of the Square: ");
    scanf("%d", &square);
    area(square);
    return 0;
}

void area(int square)
{
    int sq;
    sq = square * square;
    printf("Area of the Square: %d", sq);
}