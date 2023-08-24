#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination pointer to string
 * @src: source string pointer
 * @n: number of bytes from source string
 * Return: returns pointer to first char of string
 */
char *_strncpy(char *dest, char *src, int n)
{
static int i;

for (; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
