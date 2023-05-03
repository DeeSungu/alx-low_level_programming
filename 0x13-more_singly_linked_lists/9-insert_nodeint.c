#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: head
 * @idx: idx
 * @n: n
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nNode;
unsigned int a;
listint_t *b = *head;

nNode = malloc(sizeof(listint_t));
if (nNode == NULL || head == NULL)
return (NULL);

nNode->n = n;
nNode->next = NULL;

if (idx == 0)
{
nNode->next = *head;
*head = nNode;
return (nNode);
}

for (a = 0; b && a < idx; a++)
{
	if (a == idx - 1)
	{
	nNode->next = b->next;
	b->next = nNode;
	return (nNode);
	}
	else
	b = b->next;
}

return (NULL);
}
