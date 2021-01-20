#include<stdio.h>
main(){
	int roll_number,english,math,urdu , total,percentage;
	
	printf("\n Enter roll number ");
	scanf("%d",&roll_number);
	
	printf("\n Enter ENGLISH marks");
	scanf("%d",&english);
	
	printf("\n Enter MATH marks");
	scanf("%d",&math);
	
	printf("\n Enter Urdu marks");
	scanf("%d",&urdu);
		
	total=english+math+urdu;
	
	percentage=(total*100)/300;
	
	
	printf("\n Roll number %d",roll_number );
	
	printf("\n  English marks  %d",english );

	printf("\n Math marks %d",math );
	
	printf("\n Urdu marks %d",urdu );
	
	printf("\n your total marks %d",total);
	
	printf("\n your percentage %d",percentage );
	
	if(percentage>=80)
	printf("\n 1 division ");  
	
	if(percentage>=70 && percentage<80)
	printf("\n 2 division ");  
	
	if(percentage>=60 && percentage<70)
	printf("\n 3 division ");  
	
	if(percentage>=50 && percentage<60)
	printf("\n 4 division ");  
	
	if(percentage>=40 && percentage<50)
	printf("\n 5 division ");  
}
