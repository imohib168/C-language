#include <stdio.h>
main()
{
      int choice,add,sub,multi,a,b;
      float div;
      

	  printf("Enter 1 for addition of two numbers\n");
      printf("Enter 2 for subraction of two numbers\n");
      printf("Enter 3 for multiplication of two numbers\n");
      printf("Enter 4 for division of two numbers\n");
      
	  
	  printf("\n\t Type your choice : ");
      scanf("%d",&choice);
      
      printf("\n Enter first number : ");
      scanf("%d",&a);

	  printf("\n Enter second number : ");
      scanf("%d",&b);
      
	  switch(choice)
      {
           case 1:
    			 add=a+b;
				 printf("addition of two numbers is %d ",add);
                 break;
            case 2:
                 sub=a-b;
                 printf("subraction of two numbers is %d ",sub);
                 break;
            case 3:
                 multi=a*b;
				 printf("addition of two numbers is %d ",multi);
                 break;
            case 4:
                 div=a/b;
				 printf("division of two numbers is %f ",div);
                 break;
          
		    default:
				 printf("\n\a invalid choice!! "); 
       
          }
         
}

