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
	list_t *myNode;
	unsigned int len;

	for (len = 0; str[len]; len++)
	;

	myNode = malloc(sizeof(list_t));
	if (myNode == NULL)
	return (NULL);

	myNode->str = strdup(str);
	myNode->len = len;
	myNode->next = (*head);
	(*head) = myNode;

	return (myNode);

}
