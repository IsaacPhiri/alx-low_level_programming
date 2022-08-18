#include <stdio.h>

/**
 * main - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;

	for (count = 0; count < 98; count++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%lu", k);

		if (count == 97)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
