#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char str[20];
    fptr = fopen("NewFile2.txt", "w");

    printf("Write text: ");
    while (strlen(gets(str)) > 0)
    {
        fputs(str, fptr);
        fputs("\n", fptr);
    }
    fclose(fptr);
    return 0;
}