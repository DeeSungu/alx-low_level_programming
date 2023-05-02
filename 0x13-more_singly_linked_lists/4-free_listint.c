#include "lists.h"
/**
 * free_listint - function
 * @head: head
 */
void free_listint(listint_t *head)
{
listint_t *cNode;

	while (head)
	{
		cNode = head->next;
		head = cNode;
		free(head);
	}
}
