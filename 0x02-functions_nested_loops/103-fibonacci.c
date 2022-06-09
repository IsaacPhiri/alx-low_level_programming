#include <stdio.h>

/**
 * main - sums even fiboncci numbers under 4 million.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long count, a, b, c, sum;

	a = sum = 0;
	b = 1;

	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c < 4000000)
		{
			sum = sum + c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
