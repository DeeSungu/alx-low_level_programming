#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function
 * @head: pointer
 * @str: new string
 *
 * Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len]; len++)
	;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (new);

}
