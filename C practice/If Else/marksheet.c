#include <stdio.h>

int main()
{
    int totalMarks = 500;
    float phys, chem, bio, maths, comp, obtainedMarks;
    float percentage;

    printf("Enter Physics Marks: ");
    scanf("%f", &phys);
    printf("Enter Chemistry Marks: ");
    scanf("%f", &chem);
    printf("Enter Biology Marks: ");
    scanf("%f", &bio);
    printf("Enter Mathematics Marks: ");
    scanf("%f", &maths);
    printf("Enter Computer Marks: ");
    scanf("%f", &comp);

    obtainedMarks = phys + chem + bio + maths + comp;

    if (obtainedMarks > 500)
    {
        printf("Marks can't be greater than total marks.");
    }
    else
    {
        percentage = ((obtainedMarks / totalMarks) * 100);
        if (percentage >= 90)
        {
            printf("Your Percentage: %.2f\nGrade: 'A'", percentage);
        }
        else if (percentage >= 80)
        {
            printf("Your Percentage: %.2f\nGrade: 'B'", percentage);
        }
        else if (percentage >= 70)
        {
            printf("Your Percentage: %.2f\nGrade: 'C'", percentage);
        }
        else if (percentage >= 60)
        {
            printf("Your Percentage: %.2f\nGrade: 'D'", percentage);
        }
        else if (percentage >= 40)
        {
            printf("Your Percentage: %.2f\nGrade: 'E'", percentage);
        }
        else if (percentage <= 40)
        {
            printf("Your Percentage: %.2f\nGrade: 'Fail'", percentage);
        }
        else
        {
            printf("Wrong Input");
        }
    }

    return 0;
}