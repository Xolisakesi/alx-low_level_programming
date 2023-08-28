#include "main.h"
/**
 * _memset - function that fills memory
 * with a constant byte.
 * @s: pointer to memory area
 * @b: constant bite to be useto fill memory
 * @n: number of times to coppy
 * Return: returns a pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
static unsigned int i;

for (; i < n; i++)
{
s[i] = b;
}
return (s);
}
