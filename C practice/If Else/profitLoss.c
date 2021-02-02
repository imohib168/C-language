// S.P = Selling Price
// C.P = Cost Price

// Formulae
// Profit = S.P - C.P
// Loss = C.P - S.P

#include <stdio.h>

int main()
{
    int cp, sp, amount;

    sp = 1000;
    cp = 1500;

    if (sp > cp)
    {
        amount = sp - cp;
        printf("Profit: %d", amount);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        printf("Loss: %d", amount);
    }

    return 0;
}