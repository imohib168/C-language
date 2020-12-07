#include <stdio.h>

int main()
{

    int i, count;

    printf("Input Number of terms: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        printf("Number is: %d and the cube is: %d\n", i, i*i*i);
    }

    return 0;
}