#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to search
 * @c: character to search
 *
 * Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}

		if (i == 0)
		{
			return (NULL);
		}
	}
}
