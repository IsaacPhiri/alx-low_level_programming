#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0.
 * @n: param
 * If n is greater than 15 or less than 0
 * the function should not print anything
 */

void print_times_table(int n)
{
	int i, j, mul;

	i = 0;
	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			mul = j * i;
			if (j == 0)
				_putchar(mul + '0');
			if (mul < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			} else if (mul >= 10 && mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			} else if (mul >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 100) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
