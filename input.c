#include "input.h"
#include <math.h>
#include <stdio.h>
#include <assert.h>

void input(double* a, double* b, double* c)
{
	assert(a != NULL);
	assert(b != NULL);
	assert(c != NULL);
	assert(a != b);
	assert(b != c);
	assert(a != c);

	int arg_amount = 0;
	puts("Enter coefficients:\n");

	do {
		arg_amount = scanf("%lg %lg %lg", a, b, c);
		while (getchar() != '\n');
		if (arg_amount != 3)
			{
				puts("\nWrong arguments, enter 3 numbers\n");
			}
		} while(arg_amount != 3);
	
	
	assert(isfinite(*a));
	assert(isfinite(*b));
	assert(isfinite(*c));
}
