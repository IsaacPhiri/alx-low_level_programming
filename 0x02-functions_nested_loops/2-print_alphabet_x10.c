#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
