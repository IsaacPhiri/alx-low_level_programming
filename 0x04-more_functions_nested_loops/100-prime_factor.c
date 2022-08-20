#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime
 * factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num, count;

	num = 612852475143;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
		if (num == 1)
		{
			printf("%ld\n", count);
		}
	}
	return (0);
}
