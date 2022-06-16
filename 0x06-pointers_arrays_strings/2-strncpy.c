#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination param
 * @src: source string
 * @n: size of bytes to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
