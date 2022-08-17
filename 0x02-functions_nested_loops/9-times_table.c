#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 */

void times_table(void)
{
	int i, j, mul;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			mul = j * i;

			if (j == 0)
			{
				_putchar(mul + '0');
			}

			if (mul < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
