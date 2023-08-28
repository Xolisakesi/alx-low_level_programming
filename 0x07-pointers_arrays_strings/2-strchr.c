#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a
 * character in a string.
 * @s: string to search
 * @c: charector to search for
 * Return: pointer to the first occerance of the char
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}

