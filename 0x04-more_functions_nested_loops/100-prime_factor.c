#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime
 * factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num;
	long int count;

	num = 612852475143;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			printf("%ld", count);
			num = num / count;
			if (num == 1)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
