#include <stdio.h>
#include <conio.h>

int main()
{
    int i, fact = 1, num;
    char choice;
    do
    {
        printf("\nEnter Number : ");
        scanf("%d", &num);

        while (num == 0)
        {
            printf("Can't Calculate Factorial of 0.");
            break;
        }

        i = 1;
        do
        {
            fact *= i;
            i++;
        } while (i <= num);

        printf("Answer: %d\n", fact);
        printf("Do you want to continue(y/n): ");

        choice = getche();
        char ch = choice;

        if (ch != 'n')
            fact = 1;
        else
            break;
    } while (1);
    return 0;
}