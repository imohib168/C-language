#include <stdio.h>

int main()
{
	int num, i, rem, res = 0;
	printf("Enter a three-digit integer: ");
	scanf("%d", &num);
	i = num;

	while (i != 0)
	{
		rem = i % 10;
		res += rem * rem * rem;
		i /= 10;
	}

	if (res == num)
		printf("%d is an Armstrong number.", num);
	else
		printf("%d is not an Armstrong number.", num);

	return 0;
}