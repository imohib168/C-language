#include <stdio.h> 

int main() {

	char alphabet;
	char name[5] = "mohib";

	//printf("%c",name[0]);

	printf("Guess the First Letter of My Name...\n");
	printf("Guess a Alphabet: ");
	alphabet = getchar();
	
	if (name[0] == alphabet) {
		printf("Right Guess...");
	}
	else {
		printf("Wrong Guess...");
	}

	return 0;
}