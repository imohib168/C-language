#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    angle1 = 30;
    angle2 = 70;
    angle3 = 80;

    if ((angle1 + angle2 + angle3) == 180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not Valid");
    }

    return 0;
}