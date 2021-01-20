#include<stdio.h>
#include<string.h>

void reverse(char[20]);
main()
{
	char message[20];
	reverse(message);
}

//task 13
void reverse(char message[20])
{
	printf("Enter your message: ");
	gets(message);
	printf("\nmessage before reverse\n%s",message);
	strrev(message);
	printf("\nmessage after reverse\n%s",message);
}	

