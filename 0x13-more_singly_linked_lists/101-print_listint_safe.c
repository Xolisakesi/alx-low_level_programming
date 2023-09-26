#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked
 * list safely.
 * @h: Pointer to the head of the linked list.
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *h)
{
const listint_t *tmp_h = NULL;
const listint_t *list_n = NULL;
size_t counter = 0;
size_t new_n;

tmp_h = h;
while (tmp_h)
{
printf("[%p] %d\n", (void *)tmp_h, tmp_h->n);
counter++;
tmp_h = tmp_h->next;
list_n = h;
new_n = 0;
while (new_n < counter)
{
if (tmp_h == list_n)
{
printf("-> [%p] %d\n", (void *)tmp_h, tmp_h->n);
return (counter);
}
list_n = list_n->next;
new_n++;
}
if (!h)
exit(98);
}
return (counter);
}
