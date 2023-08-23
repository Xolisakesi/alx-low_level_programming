#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: pointer to string destination
 * @src: pointer to source string
 * @n: n number of bytes from source
 * Return: returns pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
static int i, len;

for (; dest[len] != '\0'; ++len)
{
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
