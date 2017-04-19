#include "math_library.h"

double plus(double x, double y, bool *error)
{
	double result = 0;
	
	result = x + y;
	
	if((x != 0) && (y != 0) && ((x == result) || (y == result)))
		*error = true;
	
	return result;
}

double minus(double x, double y, bool *error)
{
	double result = 0;
	
	result = x - y;
	
	if(((x != 0) && (y != 0)) && (x == result))
		*error = true;
	
	return result;
}

double multi(double x, double y, bool *error)
{
	double result = 0;
	
	result = x * y;
	
	return result;
}

double divis(double x, double y, bool *error)
{
	double result = 0;
	
	if(y == 0)
	{
		*error = true;
		return 0;
	}
	
	result = x/y;
	
	return result;
}

double fact(double x, bool *error)
{
	double result = 1;
	
	if(x < 0)
	{
		*error = true;
		return 0;
	}
	
	if((x != (int)x))
	{
		*error = true;
		return 0;
	}
	
	int factor_number = x;
	while(factor_number != 0)
	{
		result = result * factor_number;
		factor_number--;
	}
	
	return result;
}

double power(double x, double n, bool *error)
{
	double result = 1;
	
	if(n == 0)
		return 1;
		
	if(n < 0)
	{
		*error = true;
		return 0;
	}
	
	if(n != (int)n)
	{
		*error = true;
		return 0;
	}
	
	for(int i = 0; i < n; i++)
	{
		result = result * x;
	}
	
	if(result == INFINITY)
		*error = true;
	
	return result;
}

double root(double x, bool *error)
{
	if(x < 0)
	{
		*error = true;
		return 0;
	}
	
	return sqrt(x);
}

double calc_pow(double x, double y, bool *error)
{


	if((x == 0) && (y < 0))
	{
		*error = true;
		return 0;
	}
	
	if(isnan(pow(x, y)) || (isinf(pow(x, y))))
	{
		*error = true;
		return 0;
	}
}
