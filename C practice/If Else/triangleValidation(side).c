#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the 1st side of triangle: ");
    scanf("%d", &side1);
    printf("Enter the 2nd side of triangle: ");
    scanf("%d", &side2);
    printf("Enter the 3rd side of triangle: ");
    scanf("%d", &side3);

    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("The triangle is not Valid");
    }

    return 0;
}