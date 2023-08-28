#include "main.h"
/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes.
 * @s: string to search
 * @accept: sting contaning the bites we looking for
 * Return: pointer to bute in s matching one in accpt
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (0);
}
