#include<stdio.h>
void matrix_mul (int [3][3],int [3][3]);
main()
{
	int	 array1 [3][3], array2 [3][3];
	matrix_mul(array1,array2);	
}

//task 12
 void matrix_mul(int [3][3],int [3][3])
{
	int array1[3][3],array2[3][3];
	int result[3][3];
	int i,j,k;
	printf("\nEnter  The value of first matrix\n");
	for(i=0;i<3;i++)
	{
		for (j=0; j<3;j++)
		{
		printf("Enter  The value at  %d %d= ",i,j);
		scanf("%d",&array1[i][j]);
		}
	}
	printf("\n******************************************\n");
	printf("\nEnter  The value of second matrix\n");
	for(i=0;i<3;i++)
	{
		for (j=0; j<3;j++)
		{
		printf("Enter  The value at %d %d= ",i,j);
		scanf("%d",&array2[i][j]);
		}
	}
	printf("\n******************************************\n");

	for( i=0;i<3;i++)
	{
		for (j=0; j<3;j++)
		{
			result[i][j]=0;
			for (int k=0;k<3;k++)
			{
			result[i][j]= result[i] [j] + array1[i][k] * array2[k][j];
			}
		}
	}
	printf("\n******************************************\n");
		printf("\n The multiplication of first and second matrix values and the resultant matrix \n");
	for(i=0;i<3;i++)
	{
		for (j=0; j<3;j++)
		{
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	
}

