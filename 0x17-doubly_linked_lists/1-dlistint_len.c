#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * of a dlistint_t list.
 * @h: param node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
