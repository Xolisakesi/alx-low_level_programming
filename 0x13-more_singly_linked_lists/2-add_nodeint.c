#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: The integer data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = (listint_t *)malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
