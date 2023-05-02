#include "lists.h"
/**
 * add_nodeint - the function
 * @head: head
 * @n: data
 * Return: address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nNode = NULL;

if (head == NULL)
return (NULL);

nNode = malloc(sizeof(listint_t));
nNode->n = n;
nNode->next = *head;
*head = nNode;

return (nNode);
}

