#include <stdio.h>

int main() {
	
	char graduate;
	int experience;

	printf("Are you Graduate? [y or n]: ");
	graduate = getchar();

	printf("Experience in this field?? [years]: ");
	scanf("%d", &experience);	

	if(graduate == 'y') {
		if(experience > 1) {
			printf("You're Eligible.");
		}  else {
			printf("You're not eligible");
		}
	}

	return 0;
}