#include<Stdio.h>

main()
{
	int a,num,sum;
	printf("Enter D Limit : ");
	scanf("%d",&a);
	
	printf("\n\nEnter %d Digits\n\n",a);
	
	while(a)
	{
		scanf("%d",&num);
		sum = sum + num;
		a--;	
	}
	
	printf("\n\nThe Sum of total number is %d ",sum);
	
}
