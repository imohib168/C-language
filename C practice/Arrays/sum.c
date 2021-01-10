#include <stdio.h>

int main()
{
    int sumNum[5];
    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &sumNum[i]);

        sum += sumNum[i];
    }
    printf("Sum of All Numbers is: %d", sum);

    return 0;
}