#include <stdio.h>

int main()
{

    int eng, urdu, maths, chem, phys;

    printf("**********************\n");
    printf("**** Marks Report ****\n");
    printf("**********************\n");

    printf("Enter English Marks: ");
    scanf("%d", &eng);
    printf("Enter Urdu Marks: ");
    scanf("%d", &urdu);
    printf("Enter Maths Marks: ");
    scanf("%d", &maths);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chem);
    printf("Enter Physics Marks: ");
    scanf("%d", &phys);

    printf("\n\n**** Subject Marks ****\n");
    printf("Marks of English = %d\n", eng);
    printf("Marks of Urdu = %d\n", urdu);
    printf("Marks of Maths = %d\n", maths);
    printf("Marks of Chemistry = %d\n", chem);
    printf("Marks of Pyhsics = %d\n", phys);

    return 0;
}