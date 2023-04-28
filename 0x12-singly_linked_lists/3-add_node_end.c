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
list_t *myNode;
list_t *c = *head;
unsigned int len;

	for (len = 0; str[len]; len++)
	;

	myNode = malloc(sizeof(list_t));
	if (myNode == NULL)
	return (NULL);

	myNode->str = strdup(str);
	myNode->len = len;
	new->next = NULL;

	if (c == NULL)
	{
	*head = myNode;
	return (myNode);
	}

	while (c->next)
	c = c->next;

	c->next = myNode;
	return (myNode);
}
