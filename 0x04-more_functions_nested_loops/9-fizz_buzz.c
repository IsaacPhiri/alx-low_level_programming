#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for 5 and
 * FizzBuzz for both.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");

		}
		else if (i % 5 == 0)
		{
			printf("Buzz");

			if (i == 100)
			{
				continue;
			}
			else
			{
				putchar(' ');
			}

		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
