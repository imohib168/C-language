#include <stdio.h>

main()
{
	int row,col,i,j;
	printf("Enter rows of array  : ");
	scanf("%d",&row);
	printf("Enter column of array  : ");
	scanf("%d",&col);
	
	float num1[row][col];
	float num2[row][col];
	float result[row][col];
	
	printf("\nEnter  The value of first matrix");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("\nEnter  The value at  %d %d= ",i,j);
		scanf("%f",&num1[i][j]);
		}
	}
	printf("\n******************************************\n");
	printf("\nEnter  The value of second matrix");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("\nEnter  The value at %d %d= ",i,j);
		scanf("%f",&num2[i][j]);
		}
	}
	printf("\n******************************************\n");

	for( i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
			result[i][j]=num1[i][j] / num2[i][j];
		}
	}
	printf("\n******************************************\n");
		printf("\n The division of first and second matrix values and the resultant matrix \n");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("%f\t",result[i][j]);
		}
		printf("\n");
	}
	
	
	
		
}
