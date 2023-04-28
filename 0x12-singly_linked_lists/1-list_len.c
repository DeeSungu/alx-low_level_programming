#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the function
 * @h: pointer
 * Return: n_of
 */
size_t list_len(const list_t *h)
{
	size_t num_of = 0;

	for (; h != NULL; h = h->next)
	{
		num_of++
	}

	return (num_of);
}
