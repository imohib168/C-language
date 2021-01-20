#include<stdio.h>
#include<string.h>

main()
{
	char word[20];
	
	printf("Enter Any Word : ");
	gets(word);
	
	int le = strlen(word); 
	int vowel=0,cons=0;
	
	for(int i=0; i<le; i++)
	{
		if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E'|| word[i] == 'I'|| word[i] == 'O'|| word[i] == 'U')
		{
			vowel++;
		}
		
		else
		{
			cons++;
		}
	}
	
	printf("\n\nThere are Total %d Vowel in a string ",vowel);
	printf("\n\nThere are Total %d Constants in a string ",cons);
}

