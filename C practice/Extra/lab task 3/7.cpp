#include<stdio.h>
main()
{
	char a;
	
	
	
	printf("Enter Character\n");
	scanf("\n%c",&a);
	
	if (a>= 'a'  &&  a<= 'z')
	printf("Its an Alphabet");
		
	else if (a>= 'A'  &&  a<= 'Z')
	printf("Its an Alphabet");
	
	else if(a>='0'  &&  a<= '9')
	printf("Its a Digit");
	
	else 
	printf("Its a special character");
	

	
	
	
}
