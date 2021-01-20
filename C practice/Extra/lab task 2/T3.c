#include <stdio.h>

 main()
  {
	char id[10];
	int Hours;
	double PHA, salary;
	printf("Input the Employees ID(Max. 10 characters): ");
	scanf("%s", &id);
	printf("\nInput the working hrs : ");
	scanf("%d", &Hours);
	printf("\n amount per hour :");
	scanf("%lf", &PHA);
	salary = PHA * Hours;
	printf("\nEmployees ID = %s\nSalary = U$ %lf\n", id,salary);
	return 0;
}
