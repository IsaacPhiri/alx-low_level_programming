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
			mul = (j * i);

			if (mul <= 9)
			{
				_putchar(mul + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j == 9)
					break;
				_putchar(',');
			}

			j++;

			if (j == 10)
				break;

			_putchar(' ');
		}
		i++;
		_putchar('\n');
	}
}
