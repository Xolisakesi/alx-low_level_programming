#include "lists.h"
/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
h = h->next;
s++;
}
return (s);
}
