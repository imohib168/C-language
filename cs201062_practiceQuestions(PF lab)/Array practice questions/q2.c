#include <stdio.h>

int main()
{
    float gpa[30];
    float sum, average = 0;
    int choice = 1, i = 0;

    while (choice != 2)
    {
        printf("\n\nPress '1' to Enter GPA\n");
        printf("Press '2' calculate average gpa\n");

        printf("\nYour Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter GPA %d: ", i + 1);
            scanf("%f", &gpa[i]);
            sum += gpa[i];
            i++;
            break;

        case 2:
            average = sum / i;
            printf("Average GPA: %.2f", average);
            break;

        default:
            printf("Invalid Input.!");
        }
    }
    return 0;
}
