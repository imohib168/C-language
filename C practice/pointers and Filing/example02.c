#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("NewFile.txt", "w");
    printf("File Opened...!");
    fclose(fptr);
    return 0;
}