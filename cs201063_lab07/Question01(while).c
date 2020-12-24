#include <stdio.h>

int main()
{

    int i, j, num;

    printf("Enter No of rows: ");
    scanf("%d", &num);

    i = 1;
    while (i <= num)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}