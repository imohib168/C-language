#include <stdio.h>
 
int main()
{
  	char grade;
  	
  	printf(" Please Enter the grade: ");
  	scanf("\n%c",&grade);
  	
  	switch(grade){
	case 'e':
		printf("\n Excellent ");
		break;
	case 'v':
		printf("\n Very Good ");
		break;
	case 'g':
		printf("\n Good");
		break;
	case 'a':
		printf("\n Aerage");
  		break;
  	case 'f':
		printf("\n Fail");
  		break;
  	
	default:
		  printf("\n Enter Valid grade "); 
	}
}
  
