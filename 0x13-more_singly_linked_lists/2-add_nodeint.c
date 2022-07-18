#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to pointer pointing to struct
 * @n: int data to add
 *
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
