#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints evry minute of the day of jack bauer, starting from 00:
 * 00 - 23:59.
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i/10) + '0');
			_putchar((i%10) + '0');

			_putchar(':');

			_putchar((j/10) + '0');
			_putchar((j%10) + '0');

			_putchar('\n');
		}
		
		if (i == 23 && j == 59)
			break;
	}
}
