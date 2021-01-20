#include <stdio.h>

int main()
{
    int side1, side2, side3, maxSide, isValid;
    printf("Enter the first side of triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of triangle: ");
    scanf("%d", &side3);

    ((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2) ? printf("Triangle is Valid") : printf("Triangle is not Valid");

    return 0;
}