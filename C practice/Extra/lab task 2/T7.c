#include <stdio.h> 
main(){
	
    float w,h,A,P;
    printf("\n Enter the width of rectangle  ");           
    scanf("%f", &w);
    printf("\n Enter the height of rectangle  ");           
    scanf("%f",&h);
    
    
	P= 2*(h+w);
	printf("Perimeter of the rectangle = %f\n",P);
	
	A= h*w;
	printf("Area of the rectangle = %f\n",A);

return(0);
}
