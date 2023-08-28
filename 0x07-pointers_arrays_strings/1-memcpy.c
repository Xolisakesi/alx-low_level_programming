#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination area
 * @src: memory source to coppy from
 * @n: number of bytes to coppy
 * Return: pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
static unsigned int i;

for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
