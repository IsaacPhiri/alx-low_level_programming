#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit(0-9).
 * @c: parameter1
 *
 * Return: 1 if digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
