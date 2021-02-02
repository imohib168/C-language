// Difference Between %f and %lf
// %f is a float (float 3.14)
// %lf is a long float (long float 3.141662354652365237452374572355)

// The term b^2-4ac is known as the discriminant of a quadratic equation

// discriminant > 0, the roots are real and different.
// Formula
// root1 = (-b + sqrt(discriminant)) / (2 * a);
// root2 = (-b - sqrt(discriminant)) / (2 * a);

// discriminant = 0, the roots are real and equal.
// Formula
// root1 = root2 = -b / (2 * a);

// discriminant < 0, the roots are complex and different.
// Formula
// RealPart = -b / (2 * a);
// ImaginaryPart = sqrt(-discriminant) / (2 * a);

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c (separated by ','): ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    discriminant = ((b * b) - 4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf  \nroot2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lfi \nroot2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}