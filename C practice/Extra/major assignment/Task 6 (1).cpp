#include<stdio.h>

main()
{
	int a,i;
	
	printf("\n\tPetran I\n\n");	
	for(a=0; a<4; a++)
	{
		for(i=0; i<10; i++)
		{
			printf("*");
			
		}
		
		printf("\n");
	}
	
	
	printf("\n\n\n\tPetran II\n\n");	
	for(a=0; a<6; a++)
	{
		for(i=0; i<a;i++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	printf("\n\n\n\tPetran III\n\n");	
	
	i,a;
    for(i=1; i<=5; i++)
    { 
        for(a=i; a<5; a++)
        {
            printf(" ");
        }
        for(a=1; a<=i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
	
	
	printf("\n\n\n\tPetran IV\n\n");	
	
	i,a;
    for(i=1; i<=5; i++)
    { 
        for(a=i; a<5; a++)
        {
            printf(" ");
        }
        for(a=1; a<=2*i-1; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n\n\tPetran V\n\n");
		
	i,a;
    for(i=1; i<=5; i++)
    { 
        for(a=i; a<5; a++)
        {
            printf(" ");
        }
        for(a=1; a<=2*i-1; a++)
        {
            printf("%d",i);
        }
        
        printf("\n");
    }
    
    printf("\n\n\n\tPetran VI\n\n");
		
	i,a;
    for(i=1; i<=5; i++)
    { 
        for(a=i; a<5; a++)
        {
            printf(" ");
        }
        for(a=1; a<=2*i-1; a++)
        {
            printf("%d",a);
        }
        
        printf("\n");
    }
}
