#include<stdio.h> 

int main() {

	int windSpeed;

	printf("Enter wind speed: ");
	scanf("%d", &windSpeed);

	if (windSpeed < 25) {
		printf("Not a strong wind");
	} else if (windSpeed > 25 && windSpeed <= 38) {
		printf("Strong Wind");
	} else if (windSpeed > 38 && windSpeed <= 54) {
		printf("Gale");
	} else if (windSpeed > 55 && windSpeed <= 72) {
		printf("Whole Gale");
	} else if (windSpeed > 72) {
		printf("Hurricane");	
	} else {
		printf("Wrong Input.!");
	}

	return 0;
}