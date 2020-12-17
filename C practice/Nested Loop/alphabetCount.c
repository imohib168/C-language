#include <stdio.h>

int main() {

	char ch;
	int count = 0;

	printf("Enter Alphabets: ");

	do {
		ch = getche();
		count++;
	} 
	while (ch != '\r');
	
	printf("\nCount: %d", count);

	return 0;
}