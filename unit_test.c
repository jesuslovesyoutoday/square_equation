#include "unit_test.h"
#include <stdio.h>

void Unit_Test(double a, double b, double c, double* x1, double* x2, enum Amount_of_roots* roots_amount,  double answ1, double answ2, enum Amount_of_roots outcome, int number)
{
	*roots_amount = SE_Solver(a, b, c, x1, x2);
	if(*x1 == answ1 && *x2 == answ2 && *roots_amount == outcome)
		printf("Test number %d passed\n", number);
	else
		printf("Test number %d failed\n", number);
}
