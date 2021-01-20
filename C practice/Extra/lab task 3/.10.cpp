#include <stdio.h>
main()
{
		int num;
			printf("enter num of the month: ");
			scanf(" %d",num);
	
	switch(num){
		case 1:
			printf(" Jan has 31 days");
			break;
		
		case 2:
			printf(" Feb has 29 days");
			break;
		
		case 3:
			printf(" Mar has 31 days");
			break;
		
		case 4:
			printf(" Apr has 30 days");
			break;
		
		case 5:
			printf(" May has 31 days");
			break;
		
		case 6:
			printf(" June has 30 days");
			break;
		
		case 7:
			printf(" July has 31 days");
			break;
		
		case 8:
			printf(" Aug has 31 days");
			break;
		
		case 9:
			printf(" Sept has 30 days");
			break;
		
		case 10:
			printf(" Oct has 31 days");
			break;
		
		case 11:
			printf(" Nov has 30 days");
			break;		
		
		case 12:
			printf(" dec has 31 days");
			break;		
		
		default:
			printf(" Month number is invalid");
	}
	
}

