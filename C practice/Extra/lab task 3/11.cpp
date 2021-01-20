#include <stdio.h>
main()
{
      int choice,r,l,w,b,h;
      float area;
      printf("Enter 1 for area of circle\n");
      printf("Enter 2 for area of rectangle\n");
      printf("Enter 3 for area of triangle\n");
      
	  printf("\n\n Enter your choice : ");
      scanf("%d",&choice);
      
	  switch(choice)
      {
           case 1:
                 printf("Input radius of the circle : ");
                 scanf("%d",&r);
                 area=3.14*r*r;
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  break;
			default:
				  printf("\n\a wrong choice"); 
          
		  }
          printf("The area is : %f\n",area);
}


