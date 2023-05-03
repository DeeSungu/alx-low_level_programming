#include "lists.h"
/**
 * myfunction - function
 * @head: head
 * Return: return
 */
size_t myfunction(const listint_t *head)
{
const listint_t *a, *h;
size_t no = 1;

if (head == NULL || head->next == NULL)
return (0);

a = head->next;
h = (head->next)->next;

while (h)
{
if (a == h)
{
a = head;
while (a != h)
{
no++;
a = a->next;
h = h->next;
}
a = a->next;
while (a != h)
{
no++;
a = a->next;
}
return (no);
}
a = a->next;
h = (h->next)->next;
}
return (0);
}

/**
 * print_listint_safe - function
 * @head: head
 * Return: return
 */
size_t print_listint_safe(const listint_t *head)
{
size_t no = 0;
const listint_t *cu = head, *s = head;

if (head == NULL)
exit(98);

while (cu)
{
no++;
printf("[%p] %d\n", (void *)cu, cu->n);
cu = cu->next;

if (cu >= s)
{
printf("-> [%p] %d\n", (void *)cu, cu->n);
no++;
break;
}
}

return (no);
}
