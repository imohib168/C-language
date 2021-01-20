#include <stdio.h>
#include <math.h>

main()
{
	int input,i;
	float b;
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
		 b=sqrt(num[i]);
			printf("\n total square root of %d is %.2f  ",num[i],b);
	}
	
	
		
}
