#include "lists.h"
/**
 * free_listint_safe - Safely frees a linked list and
 * its memory.
 * @h: Pointer to a pointer to the head of the
 * linked list.
 * Description: Frees all nodes of the linked list and
 * its memory,
 * safely handling the case where *h is NULL.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp;

if (!h || !*h)
return (count);

while (*h)
{
if (*h < (*h)->next)
{
temp = (*h)->next;
free(*h);
*h = temp;
count++;
}
else
{
free(*h);
*h = NULL;
count++;
break;
}
}
*h = NULL;
return (count);
}
