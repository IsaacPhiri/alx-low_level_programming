#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: pointer to a character.
 *
 * Return: NULL if str = NULL, On success, the _strdup function
 * returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	/*Find the length of *str*/
	unsigned int i, len;
	char *ptr;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len > 0)
	{
		ptr = (char *)malloc(sizeof(char) * len + 1);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;

			while ((ptr[i] = str[i]) != '\0')
				i++;
		}
	}

	return (ptr);
}
