#include "lists.h"
/**
 * find_listint_loop - function
 * @head: head
 * Return: return
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nsl = head;
listint_t *nfs = head;

	if (head == NULL)
	return (NULL);

while (nsl && nfs && nfs->next)
{
	nfs = nfs->next->next;
	slow = slow->next;
	if (nfs == nsl)
	{
	nsl = head;
	while (nsl != nfs)
	{
	nsl = nsl->next;
	nfs = nfs->next;
	}
	return (nfs);
	}
}

return (NULL);
}
