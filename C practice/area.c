#include <stdio.h>

void area();

int main()
{
    area();
    return 0;
}

void area()
{
    int sq;
    printf("Enter the side of the Square: ");
    scanf("%d", &sq);
    sq = sq * sq;
    printf("Area of the Square: %d", sq);
}
