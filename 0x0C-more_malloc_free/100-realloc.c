#include "main.h"
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - function that reallocates a
 * memory block using malloc and free
 * @ptr: pointer to previous allocated memory
 * @old_size: size of previois memory
 * @new_size: size of the new allocated memory
 * Return: returns a pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int copy_size;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
if (ptr)
{
copy_size = (old_size < new_size) ? old_size : new_size;
_memcpy(new_ptr, ptr, copy_size);
free(ptr);
}
return (new_ptr);
}
/**
 * _memcpy - coppies memory area
 * @src: memory to coppy from
 * @dest: destination memory
 * @n: number of bytes to coppy
 * Return: pointer to dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{                                                       unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
