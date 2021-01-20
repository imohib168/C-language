#include<stdio.h>
#include<string.h>

void number(int,int,int);
void marks(int);
void discount(int);
void input(int);
void series_of_number(int);
void matrix(int [3][3],int [3][3]);
void matrix_mul (int [3][3],int [3][3]);
void reverse(char[20]);
main()
{
	//task 1
	int a,b,c;
 	number(a,b,c);
 	//task 2
 	int num1;
	marks(num1);
	//task 3
	int n;
	discount(n);
	//task 4
	int l;
	input(l);
	//task 5
	int number;
	series_of_number(number);
}

//task 1 
void number(int a,int b,int c)
{
		
	printf("Enter 3 numbers:\n");
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("FIRST NUMBER IS %d\nSECOND NUMBER IS %d\nTHIRD NUMBER IS %d",a,b,c);

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
		printf("you have not got 5 marks extra ");
		printf("\nyour score is %d",num1);
	}
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
		amount = (bill*10)/100;
		bill=bill-amount;
		printf("\nThe total bill with 10 percent discount is %d",bill);
	}
}

//task 4
void input()
{
		int sum, x[100];
		printf("Enter your inputs:\n");
	for(int l=1;l<=100;l++)
	{
		scanf("%d",&x[l]);

		if(x[l]== -999)
		{
			printf("\nthe value is -999 so the inputs are end:");
		
			break;
		}
			 sum=sum+x[l];
	}	
		printf("\nThe sum of all inputs are : %d",sum);
}






