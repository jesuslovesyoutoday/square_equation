#include <stdio.h>
#include <math.h>
#include "Solver.h"
#include "output.h"

int main()
{
	puts("#####__Square_Equation_Soolver__####");
	puts("##                                ##");
	puts("##          /\\_/\\     ^           ##");
	puts("##         / *-* \\    \\ \\         ##");
	puts("##         |      \\   | |         ##");
	puts("##         | | | | \\_/ /          ##");
	puts("##         [_[_][_____/           ##");
	puts("##                                ##");
	puts("####################################\n");
	
	puts("Enter coefficients:\n");

	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;

	enum Amount_of_roots roots_amount;
	int arg_amount = 0;

	arg_amount = scanf("%lg %lg %lg", &a, &b, &c);

	// ieee 754 --- число одинарной точности (вики) --- как получить максимальное положительное число
	// которое можно записать в float 
	
	if ((arg_amount == 3) && isfinite(a) && isfinite(b) && isfinite(c) && isfinite(b*b) && isfinite(4*a*c))
	{
		roots_amount = SE_Solver(a, b, c, &x1, &x2);
		output(x1, x2, roots_amount);
	}
	else
	{
		printf("\nWrong arguments, enter 3 numbers\n");
	}

	return 0;
}
