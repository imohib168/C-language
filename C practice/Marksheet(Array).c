#include <stdio.h>

int main()
{
    int i, rollNo = 0, standard = 0;
    char *name[20], *schoolName[40];
    int total = 0;

    char ch_arr[10][10] = {"maths   ", "science ", "english ", "hindi   ", "computer"};
    int marks[5];

    printf("Enter your Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter your Name: ");
    scanf("%s", &name);

    printf("Enter your School Name: ");
    scanf("%s", &schoolName);

    printf("Enter your Standard: ");
    scanf("%d", &standard);

    for (i = 0; i < 5; i++)
    {
        printf("Enter Marks of %s: ", ch_arr[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("===================================================\n");
    printf("MARKSHEET OF STANDARD: %d, %s\n", standard, schoolName);
    printf("===================================================\n");
    printf("ROLL NO.: %d, Student Name: %s\n", rollNo, name);
    printf("----------------------------------------------------\n");
    printf("SUBJECT \t\t\t MARKS\n");
    printf("----------------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s \t\t\t %d\n", ch_arr[i], marks[i]);
    }
    printf("----------------------------------------------------\n");
    printf("Total Marks: \t\t\t %d\n", total);
    printf("===================================================\n");

    return 0;
}