#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - prints _putchar followed by a newline.
 *
 * Return: always zero (SUCCESS)
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;

		if (c[i] == '\0')
		{
			_putchar('\n');
		}
	}

	return (0);
}
