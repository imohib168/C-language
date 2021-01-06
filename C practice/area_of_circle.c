#include <stdio.h>

float area(float r);
float volume(float r);

int main()
{
    float userRadius;

    printf("Input radius to Calculate the Area of circle: ");
    scanf("%f", &userRadius);

    printf("The Area of the circle is: %f \nVolume of Circle is: %f", area(userRadius), volume(userRadius));

    return 0;
}

float area(float r)
{
    float area;
    area = (3.142 * (r * r));
    return area;
}

float volume(float r)
{
    float vol;
    vol = (4 / 3 * (3.142 * (r * r)));
    return vol;
}
