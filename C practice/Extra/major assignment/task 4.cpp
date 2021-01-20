#include<stdio.h>
void input(int);
main()
{
	int a;
	input(a);
}

//task 4
void input(int)
{
		int sum, a[100];
		printf("Enter your inputs:\n");
	for(int i=1;i<=100;i++)
	{
		scanf("%d",&a[i]);

	
		if(a[i]== -999)
		{
			printf("\nthe value is -999 so the inputs are end:");
			
			break;
		
		}
		 sum=sum+a[i];
	}	
		printf("\nThe sum of all inputs are : %d",sum);
}
