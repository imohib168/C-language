#include <stdio.h>

main()
{
	int row,col,i,j;
	printf("Enter rows of array  : ");
	scanf("%d",&row);
	printf("Enter column of array  : ");
	scanf("%d",&col);
	
	int num1[row][col];

	printf("\ninput  The value ");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("Enter  The value at  %d %d= ",i,j);
		scanf("%d",&num1[i][j]);
		}
	}

		printf("\ninput  The value\n");
	for(i=0;i<row;i++)
	{
		for (j=0; j<col;j++)
		{
		printf("%d\t",num1[i][j]);
		}
		printf("\n");
	}
	
	
	
		
}
