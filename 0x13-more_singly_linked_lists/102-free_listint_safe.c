#include "lists.h"
/**
 * free_listint_safe - function
 * @h: head
 * Return: return
 */
size_t free_listint_safe(listint_t **h)
{
size_t i = 0;
listint_t *a;
int j;

if (h == NULL || *h == NULL)
return (0);

	while (*h != NULL)
	{
	j = *h - (*h)->next;
		if (j > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;

return (i);
}
