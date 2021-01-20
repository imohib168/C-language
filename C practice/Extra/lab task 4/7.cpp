#include<stdio.h>

main()
	
{
		int num,a,sum=0;
		printf("Input Numbers of Terms : ");
		scanf("%d",&num);
		printf("\n");
		printf("The Even numbers are : ");
		for(a=1; a<=num; a++)
		{
				printf(" %d",2*a);
				
				sum +=2*a;
		}
		printf("");
		printf("\n\nThe Sum of %d Terms is %d ",num,sum);
}
