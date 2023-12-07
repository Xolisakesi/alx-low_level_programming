#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tmp;
tmp = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!tmp)
return (NULL);

tmp->prev = NULL;
tmp->n = n;

if (*head != NULL)
{
(*head)->prev = tmp;
tmp->next = *head;
}
else
tmp->next = NULL;

*head = tmp;
return (*head);
}
