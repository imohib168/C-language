#include <stdio.h>

int main()
{
    int i;
    int fact = 1;
    int num;

    while (1)
    {
        printf("Enter Number: ");
        scanf("%d", &num);
        if (num == 0)
            break;

        i = 1;
        while (i <= num)
        {
            fact *= i;
            i++;
        }
        printf("Factorial of a number is: %d \n", fact);
    }

    return 0;
}