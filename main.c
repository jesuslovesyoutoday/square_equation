#include <stdio.h>
#include <math.h>
#include "Solver.h"

int main()
{
	printf("#####__Square_Equation_Soolver__####\n");
	printf("##                                ##\n");
	printf("##          /\\_/\\     ^           ##\n");
	printf("##         / *-* \\    \\ \\         ##\n");
	printf("##         |      \\   | |         ##\n");
	printf("##         | | | | \\_/ /          ##\n");
	printf("##         [_[_][_____/           ##\n");
	printf("##                                ##\n");
	printf("####################################\n\n");
	
	printf("Enter coefficients:\n\n");

	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;

	int roots_amount;
	int arg_amount;

	arg_amount = scanf("%lg %lg %lg", &a, &b, &c);
	
	if ((arg_amount == 3) && isfinite(a) && isfinite(b) && isfinite(c) && isfinite(b*b) && isfinite(4*a*c))
	{
		SE_Solver(a, b, c, &x1, &x2, &roots_amount);
		
		printf("\nSolution:\n\n");
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
	}
	else
	{
		printf("\nWrong arguments, enter 3 numbers\n");
	}

	return 0;
}
