#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 * @head: pointer
 * @str: string
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *current = *head;
unsigned int len;

	for (len = 0; str[len]; len++)
	;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!current)
	{
	*head = new;
	return (new);
	}

	while (current->next)
	current = current->next;

	current->next = new;
	return (new);
}
