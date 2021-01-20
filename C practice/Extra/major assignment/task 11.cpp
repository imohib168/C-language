
#include<stdio.h>
void matrix(int [3][3],int [3][3]);
main()
{
		int array1 [3][3], array2 [3][3];
		matrix(array1,array2);	
}

//task 11

void matrix(int [3][3],int [3][3])
{
	int array1 [3][3], array2 [3][3];
	int res_array_add [3][3];
	int res_array_sub [3][3];
	//inputs for array 1
		printf("Inputs of first matrix\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter  The value at  %d %d= ",i,j);
			scanf("%d",&array1[i][j]);
		}
	
	}
	//inputs for array 2
		printf("Inputs of second array\n");
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter  The value at  %d %d= ",i,j);
			scanf("%d",&array2[i][j]);
		}
	
	}
		printf("\nprints of first array\n");
	//print array 1 elements
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
		printf("\nprint of second array:\n");
	//print array2 elements
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",array2[i][j]);
		}
		printf("\n");
	}
	//loap for addition
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res_array_add [i][j]=array1 [i][j]+array2[i][j];
		}
		printf("\n");
	}
		printf("\nprint after addition\n");
	//print after addition of first and second array
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",res_array_add[i][j]);
		}
		printf("\n");
	}
		//loap for subtraction
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			res_array_sub [i][j]=array1 [i][j]-array2[i][j];
		}
		printf("\n");
	}
	
		printf("\nprint after subtraction\n");
	//print after subtraction of first and second array
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",res_array_sub [i][j]);
		}
		printf("\n");
	}	
}
