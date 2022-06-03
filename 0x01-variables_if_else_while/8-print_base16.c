#include <stdio.h>

/**
 * main - prints single digit numbers of base 16 in lowercase
 * using putchar.
 *
 * n: var
 * Return: 0
 */

int main(void)
{
	int n;
	int h;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar(10);

return (0);
}
