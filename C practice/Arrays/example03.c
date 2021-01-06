#include <stdio.h>

void main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is Even Number \n", arr[i]);
        }
        else
        {
            printf("%d is Odd Number \n", arr[i]);
        }
    }
}