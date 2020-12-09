#include <stdio.h>

int main() {
	
	int i = 1, range;
	printf("Enter Range: ");
	scanf("%d", &range);

	while(i <= range) {
		printf("%d \n", i);
		i += 2;
	}
	return 0;
}