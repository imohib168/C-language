#include<stdio.h>

main()
{
	float a=1,num,sum=0;
	float avg;
	
	printf("Enter 10 Numbers\n\n");
	
	while(a<=10)
	{
		scanf("%f",&num);
		sum = sum+num;
		a++;
	}
	
	avg = sum/10;
	
	printf("\nSum of Total 10 Numbers is %f",sum);
	printf("\n\nThe Average 10 Numbers is %.2f",avg);
}
