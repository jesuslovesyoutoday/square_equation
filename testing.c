#include <stdio.h>
#include "unit_test.h"

int main()
{
	double x1 = 0, x2 = 0;
	enum Amount_of_roots roots_amount;

	struct Data TEST_DATA[8] = 
	{ 0, 0, 0, &x1, &x2, &roots_amount, 0, 0, INF,  1,
	  0, 0, 1, &x1, &x2, &roots_amount, 0, 0, ZERO, 1,
	  0, 1, 0, &x1, &x2, &roots_amount, 0, 0, ONE,  3,
	  1, 0, 0, &x1, &x2, &roots_amount, 0, 0, ONE,  4,
	  1, 0, 1, &x1, &x2, &roots_amount, 0, 0, ZERO, 5,
	  1, 0,-1, &x1, &x2, &roots_amount,-1, 1, TWO,  6,
	  1, 2, 1, &x1, &x2, &roots_amount,-1,-1, ONE,  7,
	  1, 5, 6, &x1, &x2, &roots_amount,-2,-3, TWO,  8 }; 

	for (int i = 0; i < 8; i++)
	{
		Unit_Test(TEST_DATA[i]);
	}
	
	return 0;
}
