#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[50];
    fptr = fopen("NewFile2.txt", "r");

    if (fptr == NULL)
    {
        printf("Error.!");
        return 0;
    }

    while (fgets(str, 50, fptr))
    {
        puts(str);
    }

    fclose(fptr);
    return 0;
}