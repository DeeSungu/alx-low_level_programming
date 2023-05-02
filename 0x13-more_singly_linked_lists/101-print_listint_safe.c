#include "lists.h"
/**
 * print_listint_safe - the function
 * @head: head
 * Return: return
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *cNode = head, *a;

	while (cNode != NULL)
	{
	i++;
	printf("[p%] %d\n", (void *)cNode, cNode->n);
	a = cNode;
	cNode = cNode->next;

	if (a <= cNode)
	{
	printf("-> [%p] %d\n", (void *)cNode, cNode->n);
	exit(98);
	}
return (i);
}
