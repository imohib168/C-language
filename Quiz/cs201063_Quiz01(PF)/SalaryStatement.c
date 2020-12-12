#include <stdio.h>

int main()
{
    int salary, yearPasseed, salaryBonus, bonus;

    salary = 35000;
    bonus = 2500;
    salaryBonus = salary + bonus;

    printf("**************************\n");
    printf("**** Salary Statement ****\n");
    printf("**************************\n");

    printf("Salary: %d \n\n", salary);

    printf("Enter year user passed with organization: ");
    scanf("%d", &yearPasseed);

    if (yearPasseed > 3)
    {
        printf("Salary is: %d \n", salaryBonus);
        printf("Bonus of %d is added. ", bonus);
    }

    return 0;
}