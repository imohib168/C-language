#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int num[10], i;
    int choice;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("\nPress '1' and print your given Numbers in Ascending Order...");
        printf("\nPress '2' and print your given Numbers in Descending Order...");
        printf("\nPress '3' to Exit the program...");

        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n\nAscending Number Series: ");
            for (i = 0; i < 10; i++)
            {
                for (int j = i; j < 10; j++)
                {
                    if (num[i] > num[j])
                    {
                        int a = num[i];
                        num[i] = num[j];
                        num[j] = a;
                    }
                }

                printf("%d ", num[i]);
            }
            break;

        case 2:
            printf("Descending Number Series: ");
            for (i = 0; i < 10; i++)
            {
                for (int j = i; j < 10; j++)
                {
                    if (num[i] < num[j])
                    {
                        int a = num[i];
                        num[i] = num[j];
                        num[j] = a;
                    }
                }

                printf("%d ", num[i]);
            }
            break;

        case 3:
            printf("\n **** Exiting... ****");
            sleep(1);
            exit(0);

        default:
            printf("Invalid Input...");
        }
    }

    return 0;
}