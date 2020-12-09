#include<stdio.h>
int main() {

	int number, count, sum=0;
	
	printf("Enter a positive Number: ");
	scanf("%d", &number);

	for (count = 1; count <= number; ++count) {
		sum = sum + count;
		// sum+=count
	}
	printf("%d", sum);

	return 0;
}