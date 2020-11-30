#include<stdio.h>

int main() {
	
	float fahrenheit;
	float celsius;

	printf("Enter Temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32) * 5 / 9;

	printf("The Temperature in Celsius is: %.2f", celsius);

	return 0;
}