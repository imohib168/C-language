#include<stdio.h>

int main(){
		
	int num,fd,ld;
	
	printf("Enter More Tham Two Digits : ");
	scanf("%d",&num);
	
	ld =  num % 10;
	
	while(num>=10){
		
		num = num / 10;
		
	}	
	
		fd = num;
		printf("\n\nFirst Digit of Number is : %d\nLast Digit of Number is : %d", fd,ld);
		printf("\n\nThe Sum of First And Last Digit is %d",fd+ld);

	return 0;
}
