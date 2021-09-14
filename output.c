#include "output.h"
#include <stdio.h>

void output(double x1, double x2, enum Amount_of_roots roots_amount)
{
	puts("\nSolution:\n");

	switch (roots_amount) {
	case ZERO:
		puts("There are no roots\n");
		break;
	case ONE:
		printf("x1 = %lg\n", x1);
		break;
	case INF:
		puts("Infinite amount of roots\n");
		break;
	case TWO:
		printf("x1 = %lg, x2 = %lg\n", x1, x2);
		break;
	default:
		puts("Error");
		break;
	}
}
