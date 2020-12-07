#include <stdio.h>

int main()
{

    int totalMarks = 100;
    float obtainedMarks, perc;

    printf("Obtained Marks: [out of 100]: ");
    scanf("%f", &obtainedMarks);

    if (obtainedMarks > totalMarks)
        printf("Marks can't be greater than 100. ");
    else
    {
        if (obtainedMarks >= 86 && obtainedMarks <= 100)
        {
            printf("For entered Marks Grade is A+ and G.P is 4.00");
        }
        else if (obtainedMarks >= 82 && obtainedMarks < 86)
        {
            printf("For entered Marks Grade is A- and G.P is 3.67");
        }
        else if (obtainedMarks >= 78 && obtainedMarks < 82)
        {
            printf("For entered Marks Grade is B+ and G.P is 3.33");
        }
        else if (obtainedMarks >= 74 && obtainedMarks < 78)
        {
            printf("For entered Marks Grade is B and G.P is 3.00");
        }
        else if (obtainedMarks >= 70 && obtainedMarks < 74)
        {
            printf("For entered Marks Grade is B- and G.P is 2.67");
        }
        else if (obtainedMarks >= 66 && obtainedMarks < 70)
        {
            printf("For entered Marks Grade is C+ and G.P is 2.33");
        }
        else if (obtainedMarks >= 62 && obtainedMarks < 66)
        {
            printf("For entered Marks Grade is C and G.P is 2.00");
        }
        else if (obtainedMarks >= 58 && obtainedMarks < 62)
        {
            printf("For entered Marks Grade is C- and G.P is 1.67");
        }
        else if (obtainedMarks >= 54 && obtainedMarks < 58)
        {
            printf("For entered Marks Grade is D+ and G.P is 1.33");
        }
        else if (obtainedMarks >= 50 && obtainedMarks < 54)
        {
            printf("For entered Marks Grade is D and G.P is 1.00");
        }
        else
        {
            printf("You're Failed.");
        }
    }

    return 0;
}