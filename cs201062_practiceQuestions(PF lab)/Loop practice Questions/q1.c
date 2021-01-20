#include <stdio.h>

int main()
{
    int num1, num, maxVal = 0, i;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);

        while (maxVal < num)
        {
            maxVal = num;
        }
    }

    num <= 0 ? printf("\nPlease enter Non-negative Integer...\n") : printf("\nMaximum Value: %d", maxVal);

    return 0;
}