#include<stdio.h>
#include<stdlib.h>

int main()
{
   
    int s, i, ts, f;

    printf("Enter size of array: ");
    scanf("%d", &s);
    
	int arr[s];
	
    printf("\nEnter Elements In Array: ");
    for(i=0; i<s; i++)
    {	printf("\n\nEnter Element at %d Index : ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &ts);

    f = 0; 
    
    for(i=0; i<s; i++)
    {
       
        if(arr[i] == ts)
        {
            f = 1;
            break;
        }
    }

    
    if(f == 1)
    {
        printf("\n%d is found at position %d", ts, i + 1);
    }
    else
    {
        printf("\n%d Is Not Found In Array", ts);
    }

    return 0;
}
