#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    // For Appending data in txt file
    char rollNo[10];
    char name[30];
    int marks = 0, i = 0;
    fptr = fopen("result.txt", "a");

    if (fptr == NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("Enter Roll No #, Name and Marks: ");
    scanf("%s %s %d", &rollNo, &name, &marks);
    fprintf(fptr, "%s %s %d\n", rollNo, name, marks);

    fclose(fptr);

    // For Reading Data from txt file
    int i = 0;
    fptr = fopen("result.txt", "r");

    if (fptr == NULL)
    {
        printf("Error Occurred.!");
        return 0;
    }

    printf("------------------------------------------------\n");
    printf("S.No.\tRoll No.\tName\t\tMarks\n");
    printf("------------------------------------------------\n");
    while (fscanf(fptr, "%s %s %d", &rollNo, &name, &marks) != EOF)
    {
        i++;
        // Deleting Vowels while Reading data from text file
        int l, k;
        int len = strlen(name);
        for (l = 0; l < len; l++)
        {
            if (name[l] == 'a' || name[l] == 'A' || name[l] == 'e' || name[l] == 'E' || name[l] == 'i' || name[l] == 'I' || name[l] == 'o' || name[l] == 'O' || name[l] == 'u' || name[i] == 'U')
            {
                for (k = l; k < len; k++)
                {
                    name[k] = name[k + 1];
                };
                len--;
            }
        }
        printf("%d\t%s\t\t%s\t\t%d\n", i, rollNo, name, marks);
    }

    // For Line Counts
    char ch;
    int countLine = 0;

    fptr = fopen("result.txt", "r");

    while ((ch = fgetc(fptr)) != EOF)
    {
        if (ch == '\n')
            countLine++;
    }

    printf("\nNumber of Lines in Text File: %d\n", countLine);

    fclose(fptr);

    return 0;
}
