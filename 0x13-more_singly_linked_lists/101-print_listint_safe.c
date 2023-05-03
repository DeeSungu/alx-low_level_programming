#include "lists.h"
/**
 * print_listint_safe - the function
 * @head: head
 * Return: return
 */
size_t print_listint_safe(const listint_t *head)
{
size_t c = 0;
const listint_t *cu = head;
const listint_t *start = NULL;

	while (cu != NULL)
	{
	c++;
	if (cu >= head + c)
	{
	start = cu;
	break;
	}
	cu = cu->next;
	}

	cu = head;

	while (cu != NULL)
	{
	printf("[%p] %d\n", (void *)cu, cu->n);
	if (current == cycle_start)
	{
	printf("-> [%p] %d\n", (void *)start, start->n);
	exit(98);
	}
	cu = cu->next;
	}

return (c);
}
