#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source stirng
 * Return: Pointer to char
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
