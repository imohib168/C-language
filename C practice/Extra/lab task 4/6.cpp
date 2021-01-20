#include<stdio.h>

main()
	
{
		int num,a,sum=0;
		printf("Enter The Numbers of Terms : ");
		scanf("%d",&num);
		printf("\n");
		printf("The odd numbers are : ");
		for(a=1; a<=num; a++)
		{ 
				printf(" %d",2*a-1);
				
				sum +=2*a-1;
		}
	
		printf("\n\nThe Sum of %d Terms is %d ",num,sum);
}
