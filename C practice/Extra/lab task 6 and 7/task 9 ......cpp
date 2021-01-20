#include <stdio.h>

main()
{
	int input,i,b;
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
		 b=num[i]*num[i];
			printf("\n total power of %d is %d  ",num[i],b);
	}
	
	
		
}
