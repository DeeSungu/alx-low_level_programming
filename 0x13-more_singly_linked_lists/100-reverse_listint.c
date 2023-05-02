#include "lists.h"
/**
 * reverse_listint - function
 * @head: head
 * Return: return
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL;
listint_t *cNode;
listint_t *i;
*cNode = *head;

while (cNode != NULL)
{
	i = cNode->next;
	cNode->next = p;
	p = cNode;
	cNode = i;
}
*head = p;

return *head;
}	
