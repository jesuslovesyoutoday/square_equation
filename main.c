#include <stdio.h>
#include "Solver.h"

int main()
{
	printf("######_Square_Equation_Soolver######\n");
	printf("Enter coefficients:\n");

	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;

	int roots_amount;

	scanf("%lg %lg %lg", &a, &b, &c);

	SE_Solver(a, b, c, &x1, &x2, &roots_amount);
	
	if (roots_amount == 0)
	{
		printf("There are no roots\n");
	}
	else if (roots_amount == 1)
	{
		printf("x1 = %lg\n", x1);
	}
	else if (roots_amount == -1)
	{
		printf("Infinite amount of roots\n");
	}
	else if (roots_amount == 2)
	{
		printf("x1 = %lg, x2 = %lg\n", x1, x2);
	}

//TODO: CAT

	return 0;
}
