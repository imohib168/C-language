#include<stdio.h>

int main()
{
	int n,ar[100],a,i,cou;
	printf("Enter Length of Array : ");
	scanf("%d",&n);
	ar[n];	
	for(a=0; a<n; a++)
	{
		printf("Input value at %d index : ",a);
		scanf("%d",&ar[a]);
	}
	printf("\n");
	for(a=0; a<n; a++)
	{
	for(i=a+1; i<n; i++)
		
		{
			if(ar[a]==ar[i])
			{
			printf("%d ",ar[a]);
			}
		}
	}
		
	return 0;		
	
	}
