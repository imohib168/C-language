
#include<stdio.h>
main(){
	int size;
	printf("Enter the no. of data: ");
	scanf("%d",&size);
	
	int num[size];
	
	for(int i =0; i<size;i++){
		printf("Enter the data in %d: ",i);
		scanf("%d",&num[i]);
	}
	int high=num[0];
	int low=num[0];
	for(int i = 0;i<size;i++){
	if(num[i]>high){
		high=num[i];
	}
	}
		for(int i = 0;i<size;i++){
	if(num[i]<low){
		low=num[i];
	}
	}
	printf("The highest number is: %d\n",high);
		printf("The lowest number is: %d",low);
}
