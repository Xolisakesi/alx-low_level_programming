#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an
 * unsigned integer.
 * @b: A pointer to a string containing '0' and '1'
 * characters.
 * Return: The converted unsigned integer, or 0 if
 * there are invalid characters in the string or if
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;
char c;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
c = b[i];
if (c != '0' && c != '1')
{
return (0);
}
result = (result << 1) | (c - '0');
}
return (result);
}
