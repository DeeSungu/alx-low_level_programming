#include <stdio.h>
#include "lists.h"

/**
 * print_list -the function
 * @h: pointer
 * Return: all
 */
size_t print_list(const list_t *h)
{
	size_t all = 0;

for (; h != NULL; h = h->next, all++)
{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
}
	return (all);
}
