#include<stdio.h>

main()
{
	int ar[100],n,swip;
	
	printf("Enter Length of Array : ");
	scanf("%d",&n);
	printf("\n**************Input**************\n\n");
	for(int a=0; a<n; a++)
	{
		printf("Enter Value at %d Element : ",a+1);
		scanf("%d",&ar[a]);
	}
	
	printf("\n\n**************Value Before Swip**************\n\n");
	for(int a=0; a<n; a++)
	{
		printf("Value at %d Element is %d\n",a,ar[a]);
	}
	
	for(int a=0; a<n; a+=2)
	{
		swip = ar[a];
		ar[a] = ar[a+1];
		ar[a+1] = swip;
		
	}
	
	printf("\n\n**************Value After Swip**************\n\n");
	for(int a=0; a<n; a++)
	{
		printf("Value at %d Element is %d\n",a,ar[a]);
	}
}
