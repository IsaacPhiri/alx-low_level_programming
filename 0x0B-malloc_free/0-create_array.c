#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of bytes.
 * @c: initilizes the array.
 *
 * Return: NULL is size is equal to 0, a pointer, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (size > 0)
	{
		ptr = (char *)malloc(sizeof(char) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;

			while (ptr[i] == '\0')
			{
				ptr[i] = c;
				i++;
			}
		}
	}

	return (ptr);
}
