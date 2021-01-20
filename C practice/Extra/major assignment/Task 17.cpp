#include<stdio.h>
#include<string.h>

main()
{
	char word[20];
	
	int a,i,le;
	
	printf("Enter Any String : ");
	gets(word);
	
	le = strlen(word);
	printf("\nRepeating Element is : ");
	for(a=0; a<le; a++)
	{
		for(i=a+1; i<le; i++)
		{
			if(word[a]==word[i])
			{
				printf("%c ",word[a]);
			}
			
		}
	}
}
