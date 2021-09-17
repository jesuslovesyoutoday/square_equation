#include "unit_test.h"
#include <stdio.h>

void Unit_Test(struct Data test_data)
{
	*test_data.roots_amount = SE_Solver(test_data.a
	                                  , test_data.b
	                                  , test_data.c
	                                  , test_data.x1
	                                  , test_data.x2);
	if(*test_data.x1 == test_data.answ1 
	&& *test_data.x2 == test_data.answ2 
	&& *test_data.roots_amount == test_data.outcome)
	{
		printf("Test number %d passed\n", test_data.number);
	}
	else
	{
		printf("Test number %d failed\n", test_data.number);
	}
}
