#include <stdio.h>
void main()
{
    int i, count, sum = 0;

    printf("Enter Integer: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        sum += i;
        printf("%d ", i);
    }
    printf("\nThe Sum is: %d ", sum);
}