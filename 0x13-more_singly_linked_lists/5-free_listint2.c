#include "lists.h"
/**
 * free_listint2 - function
 * @head: head
 */
void free_listint2(listint_t **head)
{
listint_t *cNode, *i;

if (head == NULL)
return;
	cNode = *head;
	while (cNode != NULL)
	{
	i = cNode->next;
	free(cNode);
	cNode = i;
	}
*head = NULL;
}
