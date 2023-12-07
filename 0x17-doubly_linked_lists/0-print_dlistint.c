#include "lists.h"
/**
* print_dlistint - Prints all the elements of a doubly linked list.
* @h: A pointer to the head of the doubly linked list.
*
* Return: The number of nodes in the doubly linked list.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
if (h == NULL)
return (nodes);

while (h != NULL)
{
printf("%d\n", h->n);
nodes++;
h = h->next;
}
return (nodes);
}
