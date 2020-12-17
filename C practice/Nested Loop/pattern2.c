#include <stdio.h>

int main()
{

    int num, row, star;

    printf("Enter Rows that you want to print: ");
    scanf("%d", &num);

    for (row = 1; row <= num; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}