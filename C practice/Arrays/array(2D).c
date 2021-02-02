#include <stdio.h>

int row = 3, col = 3;

void input2D(int num[row][col]);
void print2D(int num[row][col]);
int sum2D(int num[row][col]);
float avg2D(int sum);

int main()
{
    int num[row][col], sum = 0;
    float avg = 0.0;
    printf("\n**** INPUT 2D ARRAY ****\n");
    input2D(num);

    printf("\n**** PRINT 2D ARRAY ****\n");
    print2D(num);

    sum = sum2D(num);
    avg = avg2D(sum);

    printf("Sum of all values in 2D array: %d \nAverage of all values in 2D array: %.2f", sum, avg);
    return 0;
}

void input2D(int num[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Number [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
}

void print2D(int num[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("num[%d][%d] = %d \n", i, j, num[i][j]);
        }
    }
}
int sum2D(int num[row][col])
{
    int result = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result += num[i][j];
        }
    }
    return result;
}

float avg2D(int sum)
{
    float average;
    average = sum / (row * col);
    return average;
}