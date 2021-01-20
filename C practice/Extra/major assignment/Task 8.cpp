#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	int arry[5],h,a,i,nd=0;
	printf("Input Five Element In Array\n\n");
	for( a=0; a<5;a++)
	{
		printf("Input %d Element : ",a+1);
		scanf("%d",&arry[a]);	
	}
	printf("\n\n\n\n");
	
	h = arry[0];
	for(a=0; a<5; a++)
	{
		printf("Value at %d Element is %d\n\n",a+1,arry[a]);
		if(arry[a]>h)
		{
			h=arry[a];
			
			i = a;
		}
	}
	
	//Second Largest
	for(a=0; a<5; a++)
	{
		if(a==i)
		{
			a++;
			a--;
		}
		
		else
		{
			if(nd<arry[a])
			{
				nd = arry[a];
			}
		}
	}
	
	printf("\n\n1st Largest %d",h);
	printf("\n\n2nd Largest %d",nd);
}

