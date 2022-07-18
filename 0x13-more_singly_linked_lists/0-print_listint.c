#include "lists.h"

/**
 * print_listint - a function that prints the number of elements of a list.
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}


	return (count);
}
