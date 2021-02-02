#include <stdio.h>

int main()
{
    int units;
    float amount, surCharge, total;

    printf("Enter total Units: ");
    scanf("%d", &units);

    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = 25 + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        amount = 100 + ((units - 150) * 1.20);
    }
    else
    {
        amount = 220 + ((units - 250) * 1.50);
    }

    surCharge = amount * 0.20;
    total = amount + surCharge;

    printf("Your Electricity Bill: Rs. %.1f", total);

    return 0;
}