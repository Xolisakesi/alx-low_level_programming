#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a
 * specific index in a linked list.
 * @head: Pointer to a pointer to the head of the
 * linked list.
 * @index: The index of the node to delete (0-based).
 * Return: 1 if successful, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = *head;
listint_t *temp;

if (!head || !*head)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
while (i < index - 1)
{
if (!current || !current->next)
return (-1);
current = current->next;
i++;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

