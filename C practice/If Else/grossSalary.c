#include <stdio.h>

int main()
{
    float basicSalary, da, hra, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        hra = basicSalary * 0.2;
        da = basicSalary * 0.8;
    }
    else if (basicSalary <= 20000)
    {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.9;
    }
    else if (basicSalary > 20000)
    {
        hra = basicSalary * 0.3;
        da = basicSalary * 0.95;
    }

    grossSalary = basicSalary + hra + da;

    printf("Gross Salary of an Employee is: %.2f", grossSalary);

    return 0;
}