#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination parameter
 * @src: source parameter
 * @n: size of buffer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	/* making use of variable i */
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
