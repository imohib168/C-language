#include <stdio.h>

int main()
{
    int userInput, one, two, three, four, five;
    one = two = three = four = five = 0;

    printf("Enter a five digit Integer: ");
    scanf("%d", &userInput);

    one = (((userInput / 10000) % 10) + 1);
    two = (((userInput / 1000) % 10) + 1);
    three = (((userInput / 100) % 10) + 1);
    four = (((userInput / 10) % 10) + 1);
    five = (((userInput % 10)) + 1);

    printf("%d%d%d%d%d", one, two, three, four, five);

    // With Loop
    // int userInput, eachCount = 0, number = 1, add1toEach;
    // for (int i = userInput; i != 0; i /= 10)
    // {
    //     // Keeping count of how many numbers are in the user Input
    //     eachCount += 1;
    // }

    // for (int j = 1; j < eachCount; j++)
    // {
    //     // Generating 1's with the help of previous loop to add this to UserInput
    //     // For Example if userinput has 5 numbers then this loop will generate 5 1's (11111)
    //     // and then we'll add these 1's to user Input for Example: (54321 + 11111) = 654321
    //     number = number * 10;
    //     number = number + 1;
    // }

    // add1toEach = userInput + number;
    // printf("After adding one to each value: %d", add1toEach);

    return 0;
}