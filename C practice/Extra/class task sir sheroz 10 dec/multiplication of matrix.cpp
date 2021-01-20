#include <stdio.h>

main()
{
	int row,col,i,j;
	printf("Enter rows of array  : ");
	scanf("%d",&row);
	printf("Enter column of array  : ");
	scanf("%d",&col);
	
	int num1[row][col];
	int num2[row][col];
	int result[row][col];
	printf("\nEnter  The value of first matrix\n");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("Enter  The value at  %d %d= ",i,j);
		scanf("%d",&num1[i][j]);
		}
	}
	printf("\n******************************************\n");
	printf("\nEnter  The value of second matrix\n");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("Enter  The value at %d %d= ",i,j);
		scanf("%d",&num2[i][j]);
		}
	}
	printf("\n******************************************\n");

	for( i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
			result[i][j]=0;
			for (int k=0;k<col;k++)
			{
			result[i][j]= result[i] [j] + num1[i][k] * num2[k][j];
			}
		}
	}
	printf("\n******************************************\n");
		printf("\n The multiplication of first and second matrix values and the resultant matrix \n");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	
	
	
		
}
