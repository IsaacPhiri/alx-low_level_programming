#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digit numbers
 * using putchar.
 *
 * n: var
 * Return: 0
 */

int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 0; d1 <= 7; d1++)
	{
		for (d2 = d1 + 1; d2 <= 8; d2++)
		{
			for (d3 = d2 + 1; d3 <= 9; d3++)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				putchar(d3 + '0');

				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;


				putchar(44);
				putchar(32);

			}
		}
	}

	putchar(10);

return (0);
}
