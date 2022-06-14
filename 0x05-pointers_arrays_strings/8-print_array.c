#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers.
 * @a: pointer to an int
 * @n: int param
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		putchar(',');
		putchar(' ');
	}
	printf("\n");
}
