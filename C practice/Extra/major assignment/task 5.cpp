#include<stdio.h>
void series_of_number(int);
main()
{
	int number;
	series_of_number(number);
}

//task 5
void series_of_number(int number)
{
	int count;
	printf("Enter any number:" );
	scanf("%d",&number);

	while(number!=1)

	{
		if(number%2==0)
		{
			number=number/2;
			printf("\n%d",number);
		}
		
		else
		{
			number=(number*3)+1;
			printf("\n%d",number);
		}
	
	count=count+1;
	}

	if(number==1)
	{
		printf("\nerror");
	}

	printf("\ntotal numbers of steps is %d",count);

}

