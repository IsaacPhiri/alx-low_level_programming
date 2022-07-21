#include "lists.h"

/**
 * reverse_listint - a function that reverses a list.
 * @head: a pointer to a pointer pointing to the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node, *next_node;

	prev_node = NULL;
	current_node = next_node = (*head);

	while (next_node != NULL)
	{
		next_node = next_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	(*head) = prev_node;

	return (*head);
}
