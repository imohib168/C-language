#include<stdio.h>

int main() {

	/*
	1) Input length
	2) Input width
	3) area = length * width
	4) Display the Area	
	*/
	
	int length;
	int width;
	int area;

	printf("Enter Length of Rectangle: ");
	scanf("%d", &length);
	
	printf("Enter width of Rectangle: ");	
	scanf("%d", &width);

	area = length * width;

	printf("The Area of Rectangle is: %d meter", area);

	return 0;
}