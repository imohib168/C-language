#include <stdio.h>
main()
{
	
	int a;
	int b;
	int c;
	

	printf("Enter Marks in Maths: ");
	scanf("%d",&a);
	printf("Enter Marks in Physics: ");
	scanf("%d",&b);
	printf("Enter Marks in chemistry: ");
	scanf("%d",&c);

	if((a>=65)&&(b>=55)&&(c>=50))
	printf("\nThe Candidate Is Eligible For addmission");
	else
	printf("The Candidate Is Not Eligible For addmission");
	
}

