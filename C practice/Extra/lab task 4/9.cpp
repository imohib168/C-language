#include<stdio.h>

main(){
	int num,a,to=0,tw=1,tn;
	
	printf("Input Numbers of Term : ");
	scanf("%d",&num);
	
	printf("\nHere is the Fibonacci series upto to %d terms are : \n\n",num);
	for(a=1; a<=num; a++)
	{	
		printf("%d ",to);	
		tn = to+tw;
		to = tw;
		tw = tn;		
	}
	
	}

