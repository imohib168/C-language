#include<stdio.h> 

int main() {

	int leapYear, comingLeapYear;

	printf("Enter year to check whether a Year is Leap or Not: ");
	scanf("%d", &leapYear);

	comingLeapYear = (leapYear % 4 == 3);

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
	} else {
		printf("Leap year will come after %d year", comingLeapYear);
	}

	return 0;
}