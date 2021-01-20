#include <stdio.h>

int main()
{
    FILE *fptr;
    char rollNo[10];
    char name[30];
    int marks = 0;
    fptr = fopen("result.txt", "a");

    if (fptr == NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("Enter Roll No #, Name and Marks: ");
    scanf("%s %s %d", &rollNo, &name, &marks);
    fprintf(fptr, "%s %s %d\n", rollNo, name, marks);
    fprintf(fptr, "\n");

    fclose(fptr);
    return 0;
}