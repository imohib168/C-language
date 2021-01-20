#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("sentence.txt", "w");

    printf("Write text: ");
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        putc(ch, fptr);
    }

    printf("\nSentence has been written in file successfully...");

    fclose(fptr);

    return 0;
}