#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a, b, c, count;
	
	a = 1;
	b = 2;
	count = 0;

	while (count < 50)
	{
		printf("%ld", a);
		
		if (count == 49)
		{
			break;
		}
		else
		{
			printf(", ");
		}
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	putchar('\n');
}
