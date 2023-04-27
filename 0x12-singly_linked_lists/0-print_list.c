#include <stdio.h>
#include "lists.h"

/**
 * print_list -the function
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

for (; h != NULL; h = h->next, c++)
{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
}
	return (c);
}
