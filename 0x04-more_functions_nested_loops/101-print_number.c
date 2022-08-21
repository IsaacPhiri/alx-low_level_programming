#include "main.h"

/**
 * print_number - a program that prints a number
 * @n: parameter
 */

void print_number(int n)
{
/*	if (n != 0)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
*/
	if (n > 9 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 100 + '0');
	}
	else if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10  + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		n = (n) - (n) - (n);
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
