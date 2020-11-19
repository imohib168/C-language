#include<stdio.h>

int main() {
	
	// float fpNum = 0.0;
	char alpha = ' ';

	printf("Enter a Character: ");
	scanf("%c", &alpha);
	//printf("You Entered %c\n\n", alpha);
	
/*
	printf("Enter a floating point Number: ");
	scanf("%f", &fpNum);
	printf("You Entered %f\n\n", fpNum);
*/

	printf("The ASCII value of %c is: %d", alpha, alpha);	

	return 0;
}