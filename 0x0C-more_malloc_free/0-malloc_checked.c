#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates
 * memory using malloc.
 * @b: size in bytes to be allocated
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
int *mem;

mem = malloc(b);
if (mem == NULL)
exit(98);

return (mem);
}
