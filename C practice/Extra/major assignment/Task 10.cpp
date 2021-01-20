#include<stdio.h>


main(){

    int n, i, j, t;
	

    printf("Input the size of array : ");
    scanf("%d", &n);
	
	int arr1[n];
	
    printf("\n\nEnter %d Elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	    printf("\nInput Elememt at %d Index: ",i+1);
	    scanf("%d",&arr1[i]);
	}

    for(i=0; i<n; i++)
    {
    for(j=i+1; j<n; j++)
    {
    if(arr1[j] <arr1[i])
    {
    t = arr1[i];
    arr1[i] = arr1[j];
    arr1[j] = t;
    }
    }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	printf("\n\n");
	}
