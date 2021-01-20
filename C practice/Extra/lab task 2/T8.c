#include<stdio.h>
main()
{
	int a=2, b=0, c=1, d=1;
	int sum=a+b+c+d;
	
	printf("Sum of digits: %d",sum);
	printf("\nreverse order: %d%d%d%d",d,c,b,a);
	printf("\nlast digit in first position: %d%d%d%d",d,a,b,c);
	printf("\n exchange 2nd and 3rd digit %d%d%d%d",a,c,b,d);
}
