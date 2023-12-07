#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * This function creates a new node with the given value 'n' and appends it
 * to the end of the doubly linked list. If the list is empty, it becomes the
 * new head.
 *
 * Return: Address of the new node, or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *h;
h = *head;
tmp = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!tmp)
return (NULL);

tmp->n = n;
tmp->next = NULL;
if (!h)
{
tmp->prev = NULL;
*head = tmp;
return (tmp);
}

while (h->next != NULL)
{
h = h->next;
}
h->next = tmp;
tmp->prev = h;

return (tmp);
}
