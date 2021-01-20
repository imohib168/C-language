#include<stdio.h>
main()
{
	int temp;
	printf("Enter Temperature: ");
	scanf("%d",&temp);
	
	if (temp<=0)
	printf("The weather is Freezing");

	else if (temp<=10)
	printf("The weather is very cold ");

	else if (temp<=20)
	printf("The weather is cold");

	else if (temp<=30)
	printf("The weather is normal");

	else if (temp<=40)
	printf("The weather is Hot");

	else
	printf("The weather is Very Hot ");
}
