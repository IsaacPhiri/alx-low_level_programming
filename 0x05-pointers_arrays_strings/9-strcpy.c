#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
