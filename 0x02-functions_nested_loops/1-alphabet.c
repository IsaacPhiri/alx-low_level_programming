#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
