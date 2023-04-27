#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the function
 * @h: pointer to the head
 *
 * Return: c
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	for (; h != NULL; h = h->next)
	{
		c++;
	}

	return (c);
}
