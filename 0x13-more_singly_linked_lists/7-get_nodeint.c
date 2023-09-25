#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to retrieve (0-based).
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;

if (head == NULL)
return (NULL);

while (head != NULL)
{
head = head->next;
n++;
if (n == index)
{
return (head);
}
}
return (0);
}
