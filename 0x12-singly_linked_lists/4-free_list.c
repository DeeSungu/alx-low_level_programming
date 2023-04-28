#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n->str);
		free(n);
	}
}
