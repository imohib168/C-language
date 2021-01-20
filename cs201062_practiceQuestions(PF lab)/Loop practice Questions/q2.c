#include <stdio.h>

int main()
{
    int beginningNumber, endingNumber, increment, i;

    printf("Beginning number to start counting from: ");
    scanf("%d", &beginningNumber);

    printf("Ending number to stop counting at: ");
    scanf("%d", &endingNumber);

    printf("Increment number: ");
    scanf("%d", &increment);

    for (i = beginningNumber; i <= endingNumber; i += increment)
    {
        printf("%d ", i);
    }

    return 0;
}