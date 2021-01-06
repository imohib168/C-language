#include <stdio.h>

void main()
{
    int arr[10];
    int i, n;
    float sum = 0, avg = 0;

    n = 5;

    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = sum / n;

    printf("The Average is: %.1f", avg);
}