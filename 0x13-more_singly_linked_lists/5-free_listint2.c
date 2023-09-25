#include "lists.h"
/**
 * free_listint2 - Frees a linked list and its memory, and sets head to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Description: Frees all nodes of the linked list,
 * its memory, and sets head to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (*head == NULL)
return;

while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
