#include<stdio.h>

main()
{
	int n,a,ar[100],i,high,low;
	printf("Input Number Of Rows : ");
	scanf("%d",&n);
	printf("\n\n");
	for(a=0; a<n; a++)
	{
		printf("Input Number in %d Row :",a);
		scanf("%d",&ar[a]);
	}
	
	high=ar[0],low=ar[0];
	for(a=0; a<n; a++)
	{
		if(ar[a]>high)
		{
			high=ar[a];
		}
		
		else
		{
			if(ar[a]<low)
			
			low = ar[a];
		}	
	}
	
	
	printf("\n\nMaximum Element In Array is %d",high);
	printf("\n\nMinimum Element In Array is %d",low);
}
