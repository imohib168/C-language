#include <stdio.h>

long fact(int);

void main()
{
    int no, factorial;

    printf("Enter a number to calculate it's factorial: ");
    scanf("%d", &no);

    factorial = fact(no);
    printf("Factorial of the num(%d) = %ld\n", no, factorial);
}

long fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}