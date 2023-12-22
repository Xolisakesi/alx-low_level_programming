#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table
* @size: The size of the array
* Return: A pointer to the newly created hash table, NULL if failed
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));

if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
* shash_table_set - Adds or updates an element in a sorted hash table
* @ht: A pointer to the sorted hash table
* @key: The key to add or update
* @value: The value associated with the key
* Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *current, *new;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->shead;
new = malloc(sizeof(shash_node_t));

if (new == NULL)
return (0);

new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}

new->value = strdup(value);
if (new->value == NULL)
{
free(new->key);
free(new);
return (0);
}

new->sprev = NULL;
new->snext = NULL;

if (ht->shead == NULL || strcmp(ht->shead->key, key) >= 0)
{
new->snext = ht->shead;
if (ht->shead != NULL)
ht->shead->sprev = new;
ht->shead = new;
if (ht->stail == NULL)
ht->stail = new;
}
else
{
while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
current = current->snext;

new->sprev = current;
new->snext = current->snext;
if (current->snext != NULL)
current->snext->sprev = new;
current->snext = new;

if (new->snext == NULL)
ht->stail = new;
}

if (ht->array[index] != NULL)
new->next = ht->array[index];
else
new->next = NULL;

ht->array[index] = new;

return (1);
}

/**
* shash_table_get - Retrieves the value associated with a key in a sorted hash table
* @ht: A pointer to the sorted hash table
* @key: The key to get the value of
* Return: The value associated with the key, or NULL if key not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node != NULL && strcmp(node->key, key) != 0)
node = node->next;

return (node == NULL ? NULL : node->value);
}

/**
* shash_table_print - Prints a sorted hash table
* @ht: A pointer to the sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
unsigned char comma_flag;

if (ht == NULL)
return;

node = ht->shead;
comma_flag = 0;

printf("{");
while (node != NULL)
{
if (comma_flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
node = node->snext;
comma_flag = 1;
}
printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted hash table in reverse order
* @ht: A pointer to the sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node ;
unsigned char comma_flag;

if (ht == NULL)
return;

node = ht->stail;
comma_flag = 0;

printf("{");
while (node != NULL)
{
if (comma_flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
node = node->sprev;
comma_flag = 1;
}
printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table
* @ht: A pointer to the sorted hash table
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *tmp;

if (ht == NULL)
return;

node = ht->shead;
while (node != NULL)
{
tmp = node->snext;
free(node->key);
free(node->value);
free(node);
node = tmp;
}

free(ht->array);
free(ht);
}

