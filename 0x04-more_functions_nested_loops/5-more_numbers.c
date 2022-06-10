#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 - 14.
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a >= 10)
			_putchar('1');
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
	i++;
	}
}
