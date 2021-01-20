#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("NewFile.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: Can't open the file...");
        return 0;
    }

    while ((ch = getc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}