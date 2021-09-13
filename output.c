#include "output.h"
#include <stdio.h>

void output(double x1, double x2, enum Amount_of_roots roots_amount)
{
	printf("\nSolution:\n\n");
	if (roots_amount == ZERO)
	{
		printf("There are no roots\n");
	}
	else if (roots_amount == ONE)
	{
		printf("x1 = %lg\n", x1);
	}
	else if (roots_amount == INF)
	{
		printf("Infinite amount of roots\n");
	}
	else if (roots_amount == TWO)
	{
		printf("x1 = %lg, x2 = %lg\n", x1, x2);
	}	
}
