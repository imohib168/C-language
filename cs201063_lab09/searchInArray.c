#include <stdio.h>

int main()
{
    int a, i, num, searchNumber, array[100];

    printf("Enter total values you want to enter: ");
    scanf("%d", &num);

    // Taking input from user and storinf the values in an array
    for (i = 0; i < num; ++i)
    {
        printf("Enter the %d element of an Array: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing the values of Original Array
    printf("Element of an original Array are: ");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("\nEnter the Element to search in an array: ");
    scanf("%d", &searchNumber);

    int isNumverFoundInAnArray = 0;
    for (i = 0; i < num; i++)
    {
        if (array[i] == searchNumber)
        {
            isNumverFoundInAnArray = 1;
            break;
        }
    }

    // Checking variable(isNumverFoundInAnArray) value after loop whether the given number by the user is found or not
    // If it's 1 then it means the variable is found and now we know the index because the number of time loop run is the index
    if (isNumverFoundInAnArray == 1)
    {
        printf("Element %d Found at index %d ", searchNumber, i + 1);
    }
    else
    {
        printf("Element not Found");
    }

    return 0;
}