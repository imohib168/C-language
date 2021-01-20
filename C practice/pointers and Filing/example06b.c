#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[5][30];
    int i;
    fptr = fopen("FileWrite.txt", "a");

    if (fptr == NULL)
    {
        printf("Error Occurred in opening file...");
        return 0;
    }

    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 5; i++)
    {
        fputs(str[i], fptr);
        fputs("\n", fptr);
    }

    fclose(fptr);

    return 0;
}