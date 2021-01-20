#include <stdio.h>

int main()
{
    FILE *fptr;
    char rollNo[10];
    char name[30];
    int marks = 0;
    int i = 0;
    fptr = fopen("result.txt", "r");

    if (fptr == NULL)
    {
        printf("Error Occurred.!");
        return 0;
    }

    printf("--------------------------------------\n");
    printf("S.No.\tRoll No.\tName\tMarks\n");
    printf("--------------------------------------\n");
    while (fscanf(fptr, "%s %s %d", &rollNo, &name, &marks) != EOF)
    {
        i++;
        printf("%d\t%s\t%s\t%d\n", i, rollNo, name, marks);
    }

    fclose(fptr);
    return 0;
}