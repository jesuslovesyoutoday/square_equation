#include <stdio.h>
#include "unit_test.h"
#include "Solver.h"

int main()
{
	double x1 = 0, x2 = 0;
	int roots_amount;

//----------------a = 0, b = 0, c = 0----------------//

	SE_Solver(0, 0, 0, &x1, &x2, &roots_amount);
	if (roots_amount == -1)
	{
		printf("Infinity test passed\n");
	}
	else
	{
		printf("Infinity test failed\n");
	}
//---------------------------------------------------//

//----------------a = 0, b = 0, c = 1----------------//

	SE_Solver(0, 0, 1, &x1, &x2, &roots_amount);
	if (roots_amount == 0)
	{
		printf("No roots test passed\n");
	}
	else
	{
		printf("No roots test failed\n");
	}
//---------------------------------------------------//

//----------------a = 1, b = 0, c = 1----------------//

	SE_Solver(1, 0, 1, &x1, &x2, &roots_amount);
	if (roots_amount == 0)
	{
		printf("No roots test passed\n");
	}
	else
	{
		printf("No roots test failed\n");
	}
//---------------------------------------------------//

//----------------a = 1, b = 2, c = 1----------------//

	SE_Solver(1, 2, 1, &x1, &x2, &roots_amount);
	if (roots_amount == 1 && x1 == -1)
	{
		printf("Test passed, correct answer\n");
	}
	else
	{
		printf("Test failed, incorrect answer\n");
	}
//----------------a = 4, b = 2, c = 1----------------//

	SE_Solver(4, 2, 1, &x1, &x2, &roots_amount);
	if (roots_amount == 0)
	{
		printf("Negative discriminant test passed\n");
	}
	else
	{
		printf("Negative discriminant test failed\n");
	}
//---------------------------------------------------//

	return 0;
}
