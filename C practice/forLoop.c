#include <stdio.h>

int main() {
	
	int i = 1, range;
	printf("Enter Range: ");
	scanf("%d", &range);

	for (i; i <= range; i+=2)
		printf("%d \n", i);

	return 0;
}