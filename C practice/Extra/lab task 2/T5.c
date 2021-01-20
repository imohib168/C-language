#include <stdio.h>
 main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if((num % 5 == 0) && (num % 7!= 0))
    {
        printf("Number is divisible by 5 and not divisible by 7");
    }
    else if((num % 5 != 0) && (num % 7== 0))
    {
        printf("Number is divisible by 7 and not divisioble by 5 ");
    }
    else if((num % 5 == 0) && (num % 7== 0))
    {
	
    	printf("Number is divisible by 5 and 7");
	}
	else
	{
		printf("Number is not divisible by 5 and 7 both");
	}
    
}
