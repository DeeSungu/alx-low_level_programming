#include "lists.h"
/**
 * pop_listint - function
 * @head: head
 * Return: return
 */
int pop_listint(listint_t **head)
{
listint_t *a;
int dt;

if (*head == NULL)
return (0);

	a = *head;
	*head = (*head)->next;
	dt = a->n;
	free(a);

return (dt);
}
