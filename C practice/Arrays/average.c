#include <stdio.h>

int main()
{
    int averageNum[100], count = 0, sum = 0;
    float avg = 0.0;
    while (count != 100)
    {
        count++;
        printf("Enter Number %d: ", count);
        scanf("%d", &averageNum[count]);

        // if (averageNum[0] < averageNum[count])
        // {
        //     averageNum[0] = averageNum[count];
        // }

        if (averageNum[count] == -1)
        {
            break;
        }
        sum += averageNum[count];
    }

    avg = sum / count;
    printf("%d", averageNum[0]);

    printf("\nSum: %d", sum);
    printf("\nAverage: %.1f", avg);
    printf("\nMaximum: %d", averageNum[0]);
    return 0;
}