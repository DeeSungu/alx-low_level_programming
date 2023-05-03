#include "lists.h"
size_t myfunction(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* myfunction - function
* @head: head
* Return: return
*/

size_t myfunction(const listint_t *head)
{
const listint_t *b, *h;
size_t no = 1;

if (head == NULL || head->next == NULL)
return (0);

b = head->next;
h = (head->next)->next;

while (h)
{
if (b == h)
{
b = head;

while (b != h)
{
no++;
b = b->next;
h = h->next;
}
b = b->next;

while (b != h)
{
no++;
b = b->next;
}
return (no);
}
b = b->next;

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

size_t no, a = 0;
no = myfunction(head);

if (no == 0)
{
for (; head != NULL; no++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (a = 0; a < no; a++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (no);
}
