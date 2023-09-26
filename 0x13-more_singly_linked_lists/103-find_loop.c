#include "lists.h"
/**
 * find_listint_loop - Finds the start of a loop in a
 * linked list (if it exists).
 * @head: Pointer to the head of the linked list.
 * Description: Detects and returns the start of a
 * loop in a linked list,
 * or NULL if no loop is found.
 * Return: The address of the node where the loop
 * starts, or NULL if no loop exists.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_ptr = head;
listint_t *fast_ptr = head;

while (slow_ptr && fast_ptr && fast_ptr->next)
{
fast_ptr = fast_ptr->next->next;
slow_ptr = slow_ptr->next;

if (fast_ptr == slow_ptr)
{
slow_ptr = head;
while (slow_ptr != fast_ptr)
{
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}
return (fast_ptr);
}
}
return (NULL);
}
