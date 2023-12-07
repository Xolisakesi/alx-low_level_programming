#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a
 * specified index in a doubly linked list.
 * @head: A pointer to the head of the doubly
 * linked list.
 * @index: The index of the node to be deleted,
 * starting at 0.
 * Return: 1 if the deletion succeeded, i
 * -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}
if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

free(current);
return (1);
}
