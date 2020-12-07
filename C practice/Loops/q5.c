#include <stdio.h>

int main()
{

    int i, tableNo;

    printf("Enter Table No: ");
    scanf("%d", &tableNo);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", tableNo, i, tableNo * i);
    }

    return 0;
}