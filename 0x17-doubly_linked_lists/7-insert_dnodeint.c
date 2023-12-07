#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node
* with a given value at a specified index.
* @h: A pointer to the head of the doubly linked list.
* @idx: The index where the new node should be
* inserted, starting at 0.
* @n: The value to be stored in the new node.
* Return: The address of the new node, or NULL if the insertion fails.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *current, *new_node;
current = *h;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
return (NULL);

current = current->next;
}
if (current == NULL)
return (NULL);
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
current->next->prev = new_node;

current->next = new_node;

return (new_node);
}
