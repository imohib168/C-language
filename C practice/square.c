#include <stdio.h>

// Don't pass arguement
// No return


void square();

int main()
{
    square();
    return 0;
}

void square()
{
    int sq;
    printf("Enter the side of the Square: ");
    scanf("%d", &sq);
    sq = sq * sq;
    printf("Area of the Square: %d", sq);
}
