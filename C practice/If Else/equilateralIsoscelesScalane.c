#include <stdio.h>

int main()
{
    int side1, side2, side3;

    side1 = 6;
    side2 = 6;
    side3 = 6;

    if ((side1 == side2) && (side2 == side3) && (side1 == side3))
    {
        printf("Equilateral Triangle");
    }
    else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        printf("Isosceles Triangle");
    }
    else if ((side1 != side2) && (side2 != side3) && (side1 != side3))
    {
        printf("Scalene Triangle");
    }

    return 0;
}