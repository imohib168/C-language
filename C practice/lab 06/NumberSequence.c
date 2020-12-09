#include <stdio.h>

int main() {
	
	int endNum, i=1;
	
	printf("Enter End Number: ");
	scanf("%d", &endNum);

	while(i <= endNum) {
		printf("%d ", i);
		i++;
	}
	
	return 0;
}