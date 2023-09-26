#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node with a
 * given value at a specific index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node (0-based).
 * @n: The value to be stored in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *tmp, *itr = *head;

if (!head)
return (NULL);

tmp = malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
tmp->n = n;
if (idx == 0)
{
tmp->next = *head;
*head = tmp;
return (tmp);
}
while (itr && i < idx)
{
itr = itr->next;
i++;
}
if (!itr)
{
free(tmp);
return (NULL);
}
tmp->next = itr->next;
itr->next = tmp;
return (tmp);
}
