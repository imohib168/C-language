#include <stdio.h>
// Declaring functions
int factorial(int);
int permutation(int, int);
int combination(int, int);

int main()
{
    // Initializing Variables
    int factorialOfNumber, number, n, r, permutationOfNumber, combinationOfNumber;
    // Declaring Variables and can be asked by user
    number = 10;
    n = 10;
    r = 5;
    // Calculation of user Input by functions
    factorialOfNumber = factorial(number);
    permutationOfNumber = permutation(n, r);
    combinationOfNumber = combination(n, r);
    // Printing out the Answers
    printf("Simle Factorial of Number: %d \n", factorialOfNumber);
    printf("Permutation of Number: %d \n", permutationOfNumber);
    printf("Combination of Number: %d \n", combinationOfNumber);
    return 0;
}

// Defining permutation Function
int permutation(int userN, int userR)
{
    return (factorial(userN) / factorial(userN - userR));
}
// Defining Combinatio Function
int combination(int userN, int userR)
{
    return (factorial(userN) / factorial(userR) * factorial(userN - userR));
}
// Defining factorial Function
int factorial(int a) // parameter 'a'
{
    int i, fact = 1;

    for (i = 1; i <= a; i++)
    {
        fact *= i;
    }
    // Returning a value that is stored in 'fact'
    return fact; // returning a variable not printing/calling...
}