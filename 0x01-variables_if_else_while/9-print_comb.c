#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
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
		if ( n < 9 )
		{
			putchar(44);
			putchar(32);
		}

	}
	putchar(10);

return (0);
}
