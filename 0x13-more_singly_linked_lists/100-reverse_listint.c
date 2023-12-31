#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the head of the list.
 * Return: Pointer to the new head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

