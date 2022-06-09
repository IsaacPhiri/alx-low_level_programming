#include "main.h"

/**
 * main - the function will assign a random
 * number to n each time it's executed.
 *
 * @n: var1
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
