#include <stdio.h>

main()
{
	int input,i,b,count=0;
	printf("Enter length of array  : ");
	scanf("%d",&input);
	int num[input];

	
	for(i=1;i<=input;i++)
	{
		printf("\nEnter  The number  %d = ",i);
		scanf("%d",&num[i]);
	}
	for( i=1;i<=input;i++)
	{
	
			printf("\n%d is on position %d",num[i],i);
			 count=count+1;
		
		
	}
	
	printf("\ntotal numbers of count are %d",count);
	
		
}
