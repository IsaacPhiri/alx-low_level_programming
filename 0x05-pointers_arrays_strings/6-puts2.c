#include "main.h"

/**
 * puts2 - a function that prints every other character of a string.
 * @str: pointer to a char
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
