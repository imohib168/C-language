#include <stdio.h>

int main()
{
    int num, i, sum = 0, rem, dig1, dig2;

    printf("Enter 4 digit Integer: ");
    scanf("%d", &num);

    // Simple If Else
    dig1 = num / 1000;
    dig2 = num % 10;
    sum = dig1 + dig2;

    printf("The Sum of first digit (%d) and last digit (%d) of %d is: %d", dig1, dig2, num, (dig1 + dig2));

    // By Loop
    
    // i = num;
    // while (i != 0)
    // {
    //     i = i / 10;
    //     d = d * 10;
    // }

    // rem = d / 10;
    // dig1 = num / rem;
    // dig2 = num % 10;

    return 0;
}