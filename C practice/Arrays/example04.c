#include <stdio.h>

float getAverageMarks(int array[], int arraySize);

void main()
{
    int n, i, marks[100];
    float avg;

    printf("Total Students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Marks of Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    avg = getAverageMarks(marks, n);
    printf("An average Marks for each Student in the First Semester is: %.2f", avg);
}

float getAverageMarks(int array[], int arraySize)
{
    int i, sum = 0;
    float avg;

    for (i = 0; i < arraySize; i++)
    {
        sum += array[i];
    }
    avg = sum / arraySize;
    return avg;
}