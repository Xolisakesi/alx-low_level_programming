#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: string to be duplcated
 * Return: returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
char *d;
static int i, size;

if (!str)
return (NULL);

while (str[size])
size++;
d = malloc((size + 1) * sizeof(char));
if (!d)
return (NULL);
for (; i <= size; i++)
{
d[i] = str[i];
}
return (d);
}
