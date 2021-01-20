#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("sentence.txt", "r");

    if (fptr == NULL)
    {
        printf("File does not exist");
        return 0;
    }

    while ((ch = getc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);
    return 0;
}