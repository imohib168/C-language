#include <stdio.h>
float avgTemp(float arr[], int daysInWeek);
int main()
{
    float temp[7];
    int i, week = 7;

    for (i = 0; i < week; i++)
    {
        printf("Enter day %d temperature: ", i + 1);
        
        scanf("%f", &temp[i]);
    }
    printf("Average: %.1fC", avgTemp(temp, week));
    return 0;
}
float avgTemp(float arr[], int daysInWeek)
{
    int i;
    float sum, avg;
    for (i = 0; i < daysInWeek; i++)
    {
        sum += arr[i];
    }
    avg = sum / daysInWeek;
    return avg;
}
