#include<stdio.h> 

int main() {

	int oranges, calcDozen;

	printf("Enter Number of Oranges: ");
	scanf("%d", &oranges);

	calcDozen = oranges / 12;

	if ((oranges % 12) == 0){
		printf("%d oranges makes %d dozens", oranges, calcDozen);
	} 
	else {
		printf("Your required oranges cannot be given in dozens.");
	}

	return 0;
}