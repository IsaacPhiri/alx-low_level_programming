#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - the function will assign a random
 * number to n each time it's executed and prints
 * the last digit.
 *
 * n: var1
 * Return: 0
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater\
 than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less\
 than 6 and not 0\n", n, lastDigit);
	}

return (0);
}
