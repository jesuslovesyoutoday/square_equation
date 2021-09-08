#include <stdio.h>
#include <math.h>

#define precision 1e-7

int Cmp(double a, double b)
{
	int out;
	//int precision = 1e-7;

	if (fabs(a - b) < precision)
	{
		out = 0;
	}
	else if ((a - b) > 0)
	{
		out = 1;
	}
	else
	{
		out = -1;
	}
		
	return out;
}
