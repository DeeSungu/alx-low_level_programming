#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: head
 * @n: n
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nNode, *lNode;

nNode = malloc(sizeof(listint_t));
if (nNode == NULL)
return (NULL);

nNode->n = n;
nNode->next = NULL;

if (*head == NULL)
{
*head = nNode;
return nNode;
}
else
lNode = *head;
while (lNode->next != NULL)
{
lNode = lNode->next;
}
return (nNode);
}
