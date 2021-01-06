#include <stdio.h>

void main()
{
    int arr[10];
    int i, n = 10;

    for (i = 0; i < n; i++)
    {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
        printf("Updated value: %d\n", arr[0]);
    }
    printf("\nThe Largest Number in an Array of %d element is: %d\n", n, arr[0]);
}