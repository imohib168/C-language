#include <stdio.h>

void main()
{
    int arr[5];
    int square[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        square[i] = arr[i] * arr[i];
        printf("Square of array Element %d is %d \n", arr[i], square[i]);
    }
}