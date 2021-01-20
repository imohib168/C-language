#include<stdio.h>

void swap(int,int);

main()
{
	int a,b;
	swap(a,b);
	
}

void swap(int a,int b)
{
	int c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("\nthe values of a and b before swaping\na = %d\nb = %d",a,b);
	
	c=a;
	a=b;
	b=c;
		printf("\nthe values of a and b after swaping\na = %d\nb = %d",a,b);
}

