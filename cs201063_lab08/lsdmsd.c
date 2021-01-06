#include <stdio.h>

int lsd(int);
int msd(int);

void main()
{
    int userInput;

    printf("Enter 3 digit integer to find LSD and MSD: ");
    scanf("%d", &userInput);

    printf("LSD is %d and MSD is %d: ", lsd(userInput), msd(userInput));
}

int lsd(int number)
{
    int lsd;
    lsd = number % 10;
    return lsd;
}

int msd(int number)
{
    int msd;
    msd = number / 100;
    return msd;
}