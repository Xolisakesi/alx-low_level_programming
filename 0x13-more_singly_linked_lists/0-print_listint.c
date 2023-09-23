#include "lists.h"
/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
int nodes = 0;
const listint_t *itr;
itr = h;
while (itr)
{
printf("%d\n", itr->n);
itr = itr->next;
nodes++;
}
return (nodes);
}
