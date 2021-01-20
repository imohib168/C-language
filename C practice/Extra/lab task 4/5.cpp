#include<stdio.h>

main()
{
	int a,i;
	printf("Enter Any Table Number : ");
	scanf("%d",&i);
	printf("\n");
	for(a=1; a<=10; a++){
		
		printf("%d * %d = %d\n",i,a,i*a);
	}

}
