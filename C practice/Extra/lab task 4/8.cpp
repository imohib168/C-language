#include<stdio.h>

main()
	
{
		int num,a,sum=0;
		printf("Input Numbers of Terms : ");
		scanf("%d",&num);
		printf("\n");
		printf("The square natural upto 5 terms are : ");
		for(a=1; a<=num; a++)
		{
				printf(" %d",a*a);
				
				sum +=a*a;
		}
		printf("");
		printf("\n\nThe Sum of Square Natural Number upto %d terms = %d ",num,sum);
}
