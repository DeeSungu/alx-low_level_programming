#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list at index
 * @head: pointer.
 * @index: node position starting from 0.
 *
 * If the node does not exist, return NULL.
 *
 * Return: nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{

		if (i == index)
			break;
		i++;

		head = head->next;
	}
	return (head);
}
