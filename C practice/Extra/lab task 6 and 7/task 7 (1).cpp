#include <stdio.h>

main()
{
	int input,i,b,per,sum=0;
	printf("Enter total papers length  : ");
	scanf("%d",&input);
	int num[input];

	
	for(i=1;i<input;i++)
	{
		printf("\nEnter  The marks of %d  = ",i);
		scanf("%d",&num[i]);
	}
	for( i=1;i<input;i++)
	{
		 sum = sum + num[i];
		
	}
		printf("\n total sum of all paper marks is %d  ",sum);
		b=100*input;
		per=(sum*100)/b;
		printf("\n the percentage is %d ",per);
		
}
