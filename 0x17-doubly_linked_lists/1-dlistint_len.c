#include "lists.h"
/**
* dlistint_len - function that calculates the size of a double linked list
* @h: pointer to head of list
* Return: returns list size
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t size = 0;
if (h == NULL)
return (size);

while (h != NULL)
{
size++;
h = h->next;
}
return (size);
}
