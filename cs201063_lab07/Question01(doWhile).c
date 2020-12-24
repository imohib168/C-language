#include <stdio.h>

int main()
{

    int i, j, num;

    printf("Enter No of rows: ");
    scanf("%d", &num);

    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d", j);
            j++;
        } while (j <= i);

        i++;
        printf("\n");
    } while (i <= num);

    return 0;
}