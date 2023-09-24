#include "lists.h"
/**
 * add_nodeint_end - Add a new node with a string to the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: The int to add to the new node.
 *
 * Return: Address of the new node or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *iter = *head;
listint_t *new = (listint_t *)malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!iter)
{
*head = new;
return (new);
}
while (iter->next)
{
iter = iter->next;
}
iter->next = new;
return (new);
}
