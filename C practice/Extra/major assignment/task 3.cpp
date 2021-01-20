#include<stdio.h>
void discount(int);
main()
{
		int n;
		discount(n);
}

//task 3
void discount(int n)
{
	int bill,amount;
	printf("\nEnter the numbers of item that you want to purchase: ");
	scanf("%d",&n);
	bill = n*100;
	printf("\n%d",bill);
	if (n<10)
	{	
		printf("\nThe total bill is %d",bill);
	}
	else
	{
		amount = (bill*n)/100;
		bill=bill-amount;
		printf("\nThe total bill with 10 percent discount is %d",bill);
	}
}

