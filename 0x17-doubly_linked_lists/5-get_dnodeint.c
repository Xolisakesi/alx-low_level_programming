#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node at a
 * specified index in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node,
 * Return: Pointer to the node at the given index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (head != NULL && index != i)
{
i++;
head = head->next;
}
return (head);
}
