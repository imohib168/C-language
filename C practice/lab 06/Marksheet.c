#include <stdio.h>

int main() {
	
	int obtainedMarks = 0, i = 1;


	
	while(i <= 5) {
		printf("Enter Obtained Marks: ");
		scanf("%d", &obtainedMarks);

		if (obtainedMarks >= 50) {
			printf("Passed. \n");
		}
		else {
			printf("Failed. \n");
		}
		i++;
	}

	return 0;
}