#include<stdio.h>
#include<string.h>

void count_word(char[50]);
main()
{
	char sentence[50];
	count_word(sentence);
}

//task 14
void count_word(char sentence[50])
{
	int count=1;
	printf("Enter your message: ");
	gets(sentence);
	
	for(int i=0; sentence[i]!='\0';i++)
	{
		if( sentence[i]== ' ')
		{
			count++;
		}
	}
	printf("\n Total Words in this sentence = %d",count);
}	

