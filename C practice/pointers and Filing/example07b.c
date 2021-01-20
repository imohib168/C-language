#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[5][30];
    int i;
    fptr = fopen("FileWrite.txt", "r");

    if (fptr == NULL)
    {
        printf("Error.!");
        return 0;
    }

    for (i = 0; i < 5; i++)
    {
        fgets(str[i], 50, fptr);
    }

    printf("Data Read from File: ");
    for (i = 0; i < 5; i++)
    {
        puts(str[i]);
    }

    fclose(fptr);
    return 0;
}