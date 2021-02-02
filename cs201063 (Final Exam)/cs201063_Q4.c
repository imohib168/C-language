#include <stdio.h>

int main()
{
    int stdRollNumber, stdStandard, total = 0;
    char name[10], schoolName[30];

    int mathsMarks, scienceMarks, englishMarks, hindiMarks, computerMarks = 0;

    printf("Enter your Roll No: ");
    scanf("%d", &stdRollNumber);

    printf("Enter your Name: ");
    scanf("%s", &name);

    printf("Enter your School Name: ");
    scanf("%s", &schoolName);

    printf("Enter your Standard: ");
    scanf("%d", &stdStandard);

    // Marks
    printf("Enter Marks of Maths: ");
    scanf("%d", &mathsMarks);

    printf("Enter Marks of Science: ");
    scanf("%d", &scienceMarks);

    printf("Enter Marks of Maths: ");
    scanf("%d", &englishMarks);

    printf("Enter Marks of Science: ");
    scanf("%d", &hindiMarks);

    printf("Enter Marks of Computer: ");
    scanf("%d", &computerMarks);

    total = mathsMarks + scienceMarks + englishMarks + hindiMarks + computerMarks;

    printf("======================================\n");
    printf("MARKSHEET OF STANDARD: %d, %s\n", stdStandard, schoolName);
    printf("======================================\n");
    printf("ROLL NO.: %d, Student Name: %s\n", stdRollNumber, name);
    printf("--------------------------------------\n");
    printf("SUBJECT \t\t\tMARKS\n");
    printf("--------------------------------------\n");
    printf("Maths    \t\t\t%d\n", mathsMarks);
    printf("Science  \t\t\t%d\n", scienceMarks);
    printf("English  \t\t\t%d\n", englishMarks);
    printf("Hindi    \t\t\t%d\n", hindiMarks);
    printf("Computer \t\t\t%d\n", computerMarks);
    printf("--------------------------------------\n");
    printf("Total Marks:\t\t\t%d\n", total);
    printf("======================================\n");

    return 0;
}