#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value.
 *
 * @int n: arg
 * Return: abs_value
 */

int _abs(int n)
{
	int abs_value;

	if (n > 0)
	{
		abs_value = n;
	}
	else if (n < 0)
	{
		abs_value = (n - n - n);
	}
	else
	{
		abs_value = 0;
	}

	return (abs_value);
}
