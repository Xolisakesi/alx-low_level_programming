#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - function that allocates memory for
 * an array, using malloc.
 * @nmemb: number of elements in an array
 * @size: size of element
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
_memset(p, 0, nmemb * size);
return (p);
}
/**
 * _memset - fills memory tith a constant byte
 * @s: memory to be filled
 * @b: char to be coppied
 * @n: number of tymes to coppy b
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
{
s[i] = b;
}
return (s);
}
