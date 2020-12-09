#include<stdio.h>

int main() {

    int obtainedMarks;

    printf("Obtained Marks: [out of 100]: ");
    scanf("%d", &obtainedMarks);
	
	switch(obtainedMarks) {
		case 86:
			printf("For entered Marks Grade is A+ and G.P is 4.00");
			break;
		case 82:
			printf("For entered Marks Grade is A- and G.P is 3.67");
			break;
		case 78:
			printf("For entered Marks Grade is B+ and G.P is 3.33");
			break;
		case 74:
			printf("For entered Marks Grade is B and G.P is 3.00");
			break;
		case 70:
			printf("For entered Marks Grade is B- and G.P is 2.67");
			break;
		case 66:
			printf("For entered Marks Grade is C+ and G.P is 2.33");
			break;
		case 62:
			printf("For entered Marks Grade is C and G.P is 2.00");
			break;
		case 58:
			printf("For entered Marks Grade is C- and G.P is 1.67");
			break;
		case 54:
			printf("For entered Marks Grade is D+ and G.P is 1.33");
			break;
		case 50:
			printf("For entered Marks Grade is D and G.P is 1.00");
			break;
		default:
			printf("You're Failed");
	}
	
	return 0;
}