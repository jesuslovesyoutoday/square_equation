#include <stdio.h>
#include <math.h>
#include "solver.h"
#include "output.h"
#include "input.h"

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
	
	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;

	enum Amount_of_roots roots_amount;
	
	input(&a, &b, &c);
	roots_amount = SE_Solver(a, b, c, &x1, &x2);
	output(x1, x2, roots_amount);

	return 0;
}
