#include<stdio.h>
void marks(int);
main()
{
		int num1;
		marks(num1);
}

//task 2
void marks(int num1)
{
	int res;
	printf("\n\nEnter your score in subject: ");
	scanf("%d",&num1);
	if(num1>=80 && num1<90)
	{
		res=num1+5;
		printf("The total score with bonus of +5 is %d ",res);
	}
	else
	{
		printf("you have not got 5 marks extra because your score is less than 80");
		printf("\nyour score is %d",num1);
	}
}
