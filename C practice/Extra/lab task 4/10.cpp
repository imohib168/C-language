#include <stdio.h>  
int main()  
{  
   int num,count=0; 
        
   printf("ENTER THE NUMBER:");  
   scanf("%d",&num);  
   while(num!=0)  
   {  
       num=num/10;  
       count++;  
   }  
     
   printf("\nThe number in the  digits  is : %d",count);  
    return 0;  
}  
