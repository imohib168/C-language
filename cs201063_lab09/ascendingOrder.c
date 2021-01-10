#include <stdio.h>

int main()
{
    int a, i, num, array[100];

    printf("Enter total values you want to enter: ");
    scanf("%d", &num);

    // Taking input from user and storinf the values in an array
    for (i = 0; i < num; ++i)
    {
        printf("Enter the numbers: ");
        scanf("%d", &array[i]);
    }

    // Printing the values of Original Array
    printf("Element of an original Array are: ");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", array[i]);
    }

    // Loop for sorting the array
    for (i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    // After sorting an Array
    printf("\nElement of an Array after sorting are: ");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", array[i]);
    }

    return 0;
}