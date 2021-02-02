#include <stdio.h>

int main()
{
    int num[3][3], count = 0, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Number [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("num[%d][%d] = %d \n", i, j, num[i][j]);
        }
    }

    return 0;
}