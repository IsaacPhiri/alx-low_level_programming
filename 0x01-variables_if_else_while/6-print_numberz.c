#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 starting from 0
 * using putchar.
 *
 * n: var
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	printf("\n");

return (0);
}
