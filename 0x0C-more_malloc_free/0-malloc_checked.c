#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: Returns a pointer to the allocated memory. if malloc fails,
 * the malloc_checked function should cause normal process termination
 * with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(3);
	}
}
