#include "lists.h"
/**
 * sum_listint - function
 * @head: head
 * Return: return
 */
int sum_listint(listint_t *head)
{
listint_t *cNode = head;
int s = 0;

while (cNode != NULL)
{
s += cNode->n;
cNode = cNode->next;
}
return (s);
}
