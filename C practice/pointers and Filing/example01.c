#include <stdio.h>

int main()
{
    int var = 20;
    int *ip;

    ip = &var;

    printf("Address of var variable: %x\n", &var);
    printf("Address stored in ip variabale: %x\n", ip);
    printf("Value of ip variabale: %d\n", *ip);

    return 0;
}