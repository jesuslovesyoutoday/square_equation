#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "Comp.h"
#include "Solver.h"

enum Amount_of_roots SE_Solver(double a, double b, double c, double* x1, double* x2)
{
	assert(x1 != x2);
	assert(x1 != NULL);
	assert(x2 != NULL);

	if (Cmp(c, 0)==0)
	{
		if (Cmp(a, 0)==0 && Cmp(b, 0)==0)
		{
			return INF;
		}
		else if (Cmp(a, 0)==0 || Cmp(b, 0)==0)
		{
			*x1 = 0;
			return ONE;
		}
		else 
		{
			*x1 = 0;
			*x2 = -b/a;
			return TWO;
		}
	}
	else if (Cmp(a, 0)==0 && Cmp(b, 0)==0)
	{
		return ZERO;
	}
	else if (Cmp(a, 0)==0)
	{
		*x1 = -c/b;
		return ONE;
	}
	else if (Cmp(b, 0)==0)
	{
		if (Cmp(c, 0) < 0)
		{
			double k;
			k = sqrt(c/a);
			*x1 = -k;
			*x2 = k;
			return TWO;
		}
		else
		{
			return ZERO;
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
				return ONE;
			}
			else
			{
				return TWO;
			}
		}

		else
		{
			return ZERO;
		}

	}
}
