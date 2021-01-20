#include <stdio.h>

int main()
{
    int num[10], i;
    FILE *even, *odd;
    even = fopen("Even.txt", "w");
    odd = fopen("Odd.txt", "w");

    for (i = 0; i < 10; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            fprintf(even, "%d ", num[i]);
	    fprintf(even, "\n");
        }
        else
        {
            fprintf(odd, "%d ", num[i]);
	    fprintf(odd, "\n");
        }
    }

    fclose(even);
    fclose(odd);
    return 0;
}