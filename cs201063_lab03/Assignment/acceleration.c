#include<stdio.h>

int main() {
	
	float velocity, distance, acceleration, time;

	printf("Enter Velocity of the jet <m/s>	: ");
	scanf("%f", &velocity);

	printf("Enter distance Covered by the jet <meter>: ");
	scanf("%f", &distance);
	
	time = (2 * distance) / velocity;
	acceleration = velocity / time;
	
	printf("Acceleration of the jet is: %.2f m/s^2 \n", acceleration);
	printf("Time to take off speed is: %.2f seconds \n", time);
	
	return 0;
}