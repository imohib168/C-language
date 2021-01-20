task 3
#include<stdio.h>
main()
{
	int size,i;
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int num[size];
	
	for(i=0;i<size;i++){
		printf("Enter number at position %d: ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<size;i++){
		if(num[i]%2 == 0)
			printf("\nNumber(%d) at position %d is divisible by 2!",num[i],i);
	}
}
