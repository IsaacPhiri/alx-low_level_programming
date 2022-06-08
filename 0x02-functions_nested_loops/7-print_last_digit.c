#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number.
 * @n: parameter to the function
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0 || n == 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = (n - n - n) % 10;
		_putchar(last_digit + '0');
	}

	return (last_digit);
}
