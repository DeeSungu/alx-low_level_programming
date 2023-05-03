#include "lists.h"
/**
 * get_nodeint_at_index - the function
 * @head: head
 * @index: index
 * Return: return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int b;

	for (b = 0; head != NULL && b <= index; b++)
	{
		if (b == index)
		return (head);

		head = head->next;
	}
return (NULL);
}
