#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: a pointer to the list.
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int safe;

	while (head)
	{
		safe = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (safe > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
