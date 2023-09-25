#include "lists.h"
/**
 * pop_listint - Removes the first node of a linked list and returns its data.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The data of the head node
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;

if (*head == NULL)
return (0);

tmp = *head;
data = tmp->n;
*head = (*head)->next;
free(tmp);
return (data);
}
