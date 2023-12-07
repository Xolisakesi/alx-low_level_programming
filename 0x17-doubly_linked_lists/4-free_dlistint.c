#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Deallocates the memory occupied by a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
while (head)
{
dlistint_t *tmp;
tmp = head;
head = head->next;
free(tmp);
}
}
