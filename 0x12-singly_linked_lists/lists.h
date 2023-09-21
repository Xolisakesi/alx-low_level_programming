#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/*Define a structure for a node in the linked list*/

/**
 * struct list - Structure for a linked list node.
 * @str: Pointer to a string.
 * @len: Length of the string.
 * @next: Pointer to the next node in the list.
 */

typedef struct list
{
char *str;
unsigned int len;
struct list *next;
} list_t;
/* function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif

