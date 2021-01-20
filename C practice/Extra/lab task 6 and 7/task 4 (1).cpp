#include <stdio.h>

main()
{
	int input,i,avg,sum=0;
	printf("Enter lenth of array : ");
	scanf("%d",&input);
	int marks[input];

	
	for(i=0;i<input;i++)
	{
		printf("\nEnter the The id of student at position %d = ",i);
		scanf("%d",&marks[i]);
	}
	for( i=0;i<input;i++)
	{
		 sum = sum + marks[i];
		
	}
		printf("\n total sum is %d  ",sum);
		 avg = sum/input;
		printf("\n Average of %d is  %d  ",input,avg);
}
