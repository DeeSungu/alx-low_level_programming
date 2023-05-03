#include "lists.h"
/**
 * delete_nodeint_at_index - pointer
 * @head: head
 * @index: index
 * Return: return
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a = 0;
listint_t *b = *head;
listint_t *cNode = NULL;

	if (*head == NULL)
	return (-1);

if (index == 0)
{
*head = (*head)->next;
free(b);
return (1);
}

	while (a < index - 1)
	{
	if (b == NULL || !(b->next))
	return (-1);
	b = b->next;
	a++;
	}
cNode = b->next;
b->next = cNode->next;
free(cNode);

return (1);
}
