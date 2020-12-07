#include <stdio.h>

int main() {

	float eng, maths, phys, chem, isl, obtainedMarks, percentage;
	int totalMarks = 500;

	printf("Enter your Subject Marks seperated By ',': ");
	scanf("%f, %f, %f, %f, %f", &eng, &maths, &phys, &chem, &isl);

	obtainedMarks = eng + maths + phys + chem + isl;

	percentage = ((obtainedMarks / totalMarks) * 100);

	printf("You Obtained Marks: %.2f \nYour percentage: %.2f \n", obtainedMarks, percentage);
	
	if(percentage >= 80) {
		printf("Grade A+");
	}	
	else if(percentage >= 70) {
		printf("Grade A");
	}	
	else if(percentage >= 60) {
		printf("Grade B");
	}
	else if(percentage >= 50) {
		printf("Grade C");
	}	
	else if(percentage < 50) {
		printf("Fail");
	}
		
	return 0;
}