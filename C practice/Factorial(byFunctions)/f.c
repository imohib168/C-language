#include <stdio.h>

long factorial(int);
float permutation(int, int);

void main()
{

    int userInput, n, r;
    long calculateFactorial;
    float calculatePermutation, calculateCombination;
    userInput = 10;

    calculateFactorial = factorial(userInput);
    calculatePermutation = permutation(n, r);

    printf("Factorial: %ld", calculateFactorial);
    printf("Permutation: %f", calculatePermutation);
}

float permutation(int userN, int userR)
{
    float perm = factorial(userN) / factorial(userN - userR);
    return perm;
}

long factorial(int a)
{
    int i, fact = 1;
    for (i = 1; i <= a; i++)
    {
        fact *= i;
    }

    return fact;
}