#include "main.h"

/**
 * binary_to_uint - binary to int
 * @b: string of chars
 *
 * Return: converted number or 0 if theres no chars and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decval = 0;
	int x;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		decval = 2 * decval + (b[x] - '0');
	}

	return (decval);
}
