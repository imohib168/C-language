#include<stdio.h>
void number(int,int,int);
main()
{
	int a,b,c;
 	number(a,b,c);
}

//task 1 
void number(int a,int b,int c)
{
		
	printf("Enter 3 numbers:\n");
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("FIRST NUMBER IS %d \n SECOND NUMBER IS %d \n THIRD NUMBER IS %d",a,b,c);

	if (a>b && a>c)
	{
		printf("\nFirst number = %d is largest",a);	
	}
	else if (b>a && b>c)
	{
		printf("\nsecond number = %d is largest",b);
	}
	else if(c>a && c>b)
	{
		printf("\nThird number = %d is largest",c);
	}
}
