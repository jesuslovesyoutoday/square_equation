#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "Comp.h"

int SE_Solver(double a, double b, double c, double* x1, double* x2)
{
	assert(x1 != x2);
	assert(x1 != NULL);
	assert(x2 != NULL);

	if (Cmp(c, 0)==0)
	{
		if (Cmp(a, 0)==0 && Cmp(b, 0)==0)
		{
			return -1;
		}
		else if (Cmp(a, 0)==0 || Cmp(b, 0)==0)
		{
			*x1 = 0;
			return 1;
		}
		else 
		{
			*x1 = 0;
			*x2 = -b/a;
			return 2;
		}
	}
	else if (Cmp(a, 0)==0 && Cmp(b, 0)==0)
	{
		return 0;
	}
	else if (Cmp(a, 0)==0)
	{
		*x1 = -c/b;
		return 1;
	}
	else if (Cmp(b, 0)==0)
	{
		if (Cmp(c, 0) < 0)
		{
			double k;
			k = sqrt(c/a);
			*x1 = -k;
			*x2 = k;
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else 
	{
		double discr;
		discr = b*b - 4*a*c;
		if (Cmp(discr, 0)==0 || Cmp(discr, 0)>0)
		{
			double sqrt_discr;
			sqrt_discr = sqrt(discr);
			*x1 = (-b + sqrt_discr)/(2*a);
			*x2 = (-b - sqrt_discr)/(2*a);

			if (Cmp(*x1, *x2)==0)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}

		else
		{
			return 0;
		}

	}
}
