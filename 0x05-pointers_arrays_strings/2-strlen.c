#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a char
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
