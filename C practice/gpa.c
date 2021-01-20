#include <stdio.h>

int main()
{
    int marks;
    float totalmarks, GP, TGP;
    char subject[10];
    float CR, TCR;
    int i;

    for (i = 1; i <= 7; i++)
    {
        printf("Enter Subject name :");
        scanf("%s", &subject);

        printf("Enter Marks :");
        scanf("%d", &marks);

        totalmarks += marks;

        printf("Enter Credit Hours : ");
        scanf("%f", &CR);

        TCR += CR;

        if (marks >= 86)
        {
            GP = 4.00;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A\n", marks, subject, GP);

            TGP += (GP * CR);
        }
        else if (marks >= 80)
        {
            GP = 3.67;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 76)
        {
            GP = 3.33;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 72)
        {
            GP = 3.00;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 68)
        {
            GP = 2.67;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 64)
        {
            GP = 2.50;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 60)
        {
            GP = 2.00;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 57)
        {
            GP = 1.67;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 54)
        {
            GP = 1.33;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks >= 50)
        {
            GP = 1.00;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
        else if (marks < 50)
        {
            GP = 0.00;
            printf("Your marks is %d in %s and your GP is %.2f and grade is A-\n", marks, subject, GP);
            TGP += (GP * CR);
        }
    }

    printf("Total Marks: %.2f \n", totalmarks);
    printf("Total Credit Hours: %.0f \n", TCR);

    printf("Total GPA: %.2f \n", TGP / TCR);
    return 0;
}
