#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end of a list.
 * @head: pointer.
 * @n: data to add.
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	last = *head;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
