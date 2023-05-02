#include "lists.h"
/**
 * reverse_listint - function
 * @head: head
 * Return: return
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL;
listint_t *i = NULL;

while (*head != NULL)
{
	i = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = i;
}
*head = p;

return (*head);
}
