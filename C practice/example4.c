#include <stdio.h>

int sumOfTwoNumbers(int num1, int num2);

int main()
{

    int firstNum, secondNum, sum;

    printf("Enter 2 Numbers separated by ',' to add: ");
    scanf("%d, %d", &firstNum, &secondNum);

    sum = sumOfTwoNumbers(firstNum, secondNum);

    printf("Sum of two Numbers: %d", sum);

    return 0;
}

int sumOfTwoNumbers(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}