#include <stdio.h>

int main()
{

    int num, i, j, k;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 1; i <= num; i++)
    {
        for (j = i; j < num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}