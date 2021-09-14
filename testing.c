#include <stdio.h>
#include "unit_test.h"

int main()
{
	double x1 = 0, x2 = 0;
	enum Amount_of_roots roots_amount;

	Unit_Test(0, 0, 0, &x1, &x2, &roots_amount, 0, 0, INF, 1);
	Unit_Test(0, 0, 1, &x1, &x2, &roots_amount, 0, 0, ZERO, 2);
	Unit_Test(0, 1, 0, &x1, &x2, &roots_amount, 0, 0, ONE, 3);
	Unit_Test(1, 0, 0, &x1, &x2, &roots_amount, 0, 0, ONE, 4);
	Unit_Test(1, 0, 1, &x1, &x2, &roots_amount, 0, 0, ZERO, 5);
	Unit_Test(1, 0, -1, &x1, &x2, &roots_amount, -1, 1, TWO, 6);
	Unit_Test(1, 2, 1, &x1, &x2, &roots_amount, -1, -1, ONE, 7);
	Unit_Test(1, 5, 6, &x1, &x2, &roots_amount, -2, -3, TWO, 8);
	
	return 0;
}
