#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 - 9, except 2 and 4.
 */

void print_most_numbers(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		if (start == 2 || start == 4)
			continue;
		_putchar(start + '0');
	}
	_putchar('\n');
}
