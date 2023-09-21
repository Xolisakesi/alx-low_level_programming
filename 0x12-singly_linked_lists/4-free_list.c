#include "lists.h"
/**
 * free_list - Frees memory allocated for a linked list
 * @head: Pointer to the head of the linked list
 * This function deallocates the memory of each node in the linked list
 * starting from the given head, effectively freeing the entire list.
 */
void free_list(list_t *head)
{
list_t *current, *next_node;

current = head;
while (current)
{
next_node = current->next;
free(current->str);
free(current);
current = next_node;
}
}

