#include<stdio.h>

int main() {
	
	int distance;
	float meter1 = 1000;
	float feet1 = 3280.84; 	

	float distanceToMeter;
	float distanceToFeet;

	printf("Enter Distance in KM: ");
	scanf("%d", &distance);
	
	
	distanceToMeter = distance * meter1;	
	distanceToFeet = distance * feet1;

	printf("Distance in meters = %.2f km \n", distanceToMeter);
	printf("Distance in feet = %.2f feet \n", distanceToFeet);

	return 0;
}