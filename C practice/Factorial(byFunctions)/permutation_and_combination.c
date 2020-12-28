#include <stdio.h>

int main()
{
    int n, r, sub, i, j, k;
    int nFact = 1, rFact, factCal2 = 1;
    int permutation, combination;
    n = 5; //Can take from user as Input
    r = 5; //Can take from user as Input

    // n! / (n-r)! // n! / r!(n-r)!

    // 'n' Factorial
    for (i = 1; i <= n; i++)
    {
        nFact *= i;
    }

    // 'r' factorial
    for (k = 1; k <= n; k++)
    {
        rFact *= k;
    }

    // 'n-r' factorial
    sub = n - r;
    for (j = 1; j <= sub; j++)
    {
        factCal2 *= j;
    }

    // Calculation
    permutation = nFact / factCal2;
    combination = nFact / (rFact * sub);
    printf("%d", permutation);
    printf("%d", combination);

    return 0;
}