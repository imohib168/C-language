#include<stdio.h>

main(){
	
	int p=1,num,a;
	
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	a = num;
	
	while(a!=0){
		
		p = p * ( a  %  10 );
		
		a = a / 10;
	} 
	
	printf("\n\n%d %d",num,p);
 }
