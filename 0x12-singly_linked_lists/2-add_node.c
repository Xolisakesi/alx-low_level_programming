#include "lists.h"
/**
 * add_node - Add a new node with a string to the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: The string to add to the new node.
 * Return: Address of the new node or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head || !str)
return (NULL);
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (*head);
}

