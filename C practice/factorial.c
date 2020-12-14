#include <stdio.h>

int main()
{
	int i;
	int factorial = 1;
	int num;

	printf("Enter Number: ");
	scanf("%d", &num);

	// for (i = 1; i <= num; i++)
	// {
	// 	factorial *= i;
	// }

	i = 1;
	while (i <= num)
	{
		factorial *= i;
		i++;
	}

	printf("Factorial of number is: %d", factorial);

	return 0;
}