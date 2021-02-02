#include <stdio.h>
#include <conio.h>

int main()
{
    int i, fact = 1, num;
    char choice;
    for (i = 0; i = 1; i++)
    {
        printf("\nEnter Number : ");
        scanf("%d", &num);

        while (num == 0)
        {
            printf("Can't Calculate Factorial of 0.");
            break;
        }

        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }

        printf("Answer: %d\n", fact);
        printf("Do you want to continue(y/n): ");

        choice = getche();
        char ch = choice;

        if (ch != 'n')
            fact = 1;
        else
            break;
    }
    return 0;
}