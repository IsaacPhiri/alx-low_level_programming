#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * using putchar.
 *
 * n: var
 * Return: 0
 */

int main(void)
{
	int d1;
	int d2;
	for (d1 = 0; d1 < 9; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');

			if (d1 == 8 && d2 == 9)
				continue;


			putchar(44);
			putchar(32);

		}
	}

	putchar(10);

return (0);
}
