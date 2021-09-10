#include <stdio.h>
#include <math.h>

#define precision 1e-7

int Cmp(double a, double b)
{
	if (fabs(a - b) < precision)
	{
		return 0;
	}
	else if ((a - b) > 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
