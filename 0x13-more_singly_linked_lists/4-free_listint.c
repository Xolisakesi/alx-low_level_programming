#include "lists.h"
/**
 * free_listint - Frees a linked list and its memory.
 * @head: Pointer to the head of the linked list.
 *
 * Description: Frees all nodes of the linked list and its memory.
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
