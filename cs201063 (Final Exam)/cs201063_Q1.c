#include <stdio.h>

int main()
{
    int sales[3], i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Enter today's sales for Store %d: ", i + 1);
        scanf("%d", &sales[i]);
    }

    printf("\nDAILY SALES (each *= $100)");
    printf("\nBar Chart for Today's Sales: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Store %d: ", i + 1);
        for (j = 0; j < (sales[i] / 100); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}