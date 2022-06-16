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
	int len, i, j;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len = len + i;
	}
	
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	
	return (dest);
}
