#include<stdio.h>

main()
{
	int le,ar[100],sort=0;
	
	printf("Enter Array Length : ");
	scanf("%d",&le);
	
	for(int a=0; a<le; a++)
	{
		printf("Enter Element at %d Index : ",a);
		scanf("%d",&ar[a]);
	}
	
	for(int a=0; a<le; a++)
	{
		for(int i=a+1; i<le; i++)
		{
			if (ar[i]<ar[a])
			{
				sort = ar[a];
				ar[a] = ar[i];
				ar[i] = sort;
			}
		}
	}
	printf("\n\nSort Of Element is ");
	for(int a=0; a<le; a++)
	{
		printf("%d ",ar[a]);
	}
}
