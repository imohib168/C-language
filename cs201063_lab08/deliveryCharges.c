#include <stdio.h>

int deliveryCharges(int);

void main()
{
    int userAmount, calculateCharges;

    printf("Enter your purchase Amount: ");
    scanf("%d", &userAmount);

    calculateCharges = deliveryCharges(userAmount);

    printf("========================\n");
    printf("Delivery Charges: %d Rs \n", calculateCharges);
    printf("========================\n");
}

int deliveryCharges(int amount)
{
    int charges;
    if (amount > 1000)
    {
        charges = amount;
    }
    else if (amount < 1000 && amount > 0)
    {
        charges = amount + 150;
    }
    else
    {
        printf("\n\nWrong Input...\n");
        charges = 0;
    }
    return charges;
}