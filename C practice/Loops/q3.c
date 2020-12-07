#include <stdio.h>
int main()
{
    int i, count, sum = 0;
    float average;

    printf("Enter Integer: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        sum += i;
        printf("%d ", i);
    }
    average = sum / count;
    printf("\nThe Average is: %f \nThe Sum is: %d ", average, sum);

    return 0;
}
