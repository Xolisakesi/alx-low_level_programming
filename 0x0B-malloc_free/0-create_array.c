#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an
 * array of chars,and initializes it
 * with a specific char
 * @size: array size
 * @c: initial char
 * Return: pointer to initial char
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
return (0);
for (i = 0; i < size; i++)
{
p[i] = c;
}
p[i] = '\0';
return (p);
}
