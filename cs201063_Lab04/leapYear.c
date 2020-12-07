#include<stdio.h> 

int main() {

	int leapYear, rem, nextYear;

	printf("Enter year to check whether a Year is Leap or Not: ");
	scanf("%d", &leapYear);

	if (leapYear % 4 == 0) 
		printf("%d is a leap year", leapYear);
	else {
		rem = leapYear % 4;
		nextYear = 4 - rem;
		printf("Leap year will come after %d year", nextYear);
	}

	return 0;
}