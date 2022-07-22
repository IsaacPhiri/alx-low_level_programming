#include "main.h"

/**
 * binary_to_uint - binary to int
 * @b: string of chars
 *
 * Return: converted number or 0 if theres no chars and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	unsigned int total = 0;
	unsigned int decval = 1;
	int i, x;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
	}

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}

	return (total);
}
