#include<stdio.h> 

int main() {

	int leapYear;

	printf("Enter year to check whether a Year is Leap or Not: ");
	scanf("%d", &leapYear);

	if (leapYear % 4 == 0) {
		if(leapYear % 100 == 0) {
			if (leapYear % 400 == 0) {
				printf("%d is a leap year", leapYear);
			} else {
				printf("%d is a not a leap year", leapYear);
			}
		} else {
			printf("%d is a leap year", leapYear);
		}
	} 
	else if(leapYear % 4 == 3)
		printf("Leap year will come after 1 year");
	else if(leapYear % 4 == 2)
		printf("Leap year will come after 2 year");
	else if(leapYear % 4 == 1)
		printf("Leap year will come after 3 year");
	else 
		printf("Invalid Input");

	return 0;
}