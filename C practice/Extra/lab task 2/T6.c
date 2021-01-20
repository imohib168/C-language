#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {

  float a, b, h, Area;
 
  	printf("Enter the value of side A :");
  	scanf("\n%f ", &a);
	printf("Enter the value of side B :");
	scanf("\n%f",&b);
	printf("Enter the value of Height :");
	scanf("\n%f",&h);
	
  Area =  (a + b)/2 *h;
 
  printf("\n Area of a trapezoid = %.2f \n", Area);
  
  
}
	

