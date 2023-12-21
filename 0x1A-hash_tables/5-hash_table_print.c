#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table.
* @ht: A pointer to the hash table to print.
*
* Description: Key/value pairs are printed in the order
* they appear in the array of the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
for (node = ht->array[i]; node != NULL; node = node->next)
{
printf("'%s': '%s'%s", node->key, node->value, (node->next) ? ", " : "");
}
}
printf("}\n");
}

