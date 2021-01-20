#include<stdio.h>
main()
{
 
 int base,exp,a,pow=1;
 
 printf("Enter Base Number of Power : ");
 scanf("%d",&base);
 
 printf("\nEnter Exponent Number : ");
 scanf("%d",&exp);
 
 for(a=1; a<=exp; a++){
 		
 		pow = pow * base;
 	}
	
	printf("\nThe Base of Number is : %d\nThe Exponent of Number is : %d\nThe Power Of Number is %d",base,exp,pow);
   
	
}
