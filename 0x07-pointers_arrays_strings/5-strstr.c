#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string to search in
 * @needle:substring to look for
 * Return: returns a string
 */
char *_strstr(char *haystack, char *needle)
{
static int i, j;

while (haystack[i])
{
j = 0;
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (!needle[j])
{
return (&haystack[i]);
}
i++;
}
return (0);
}
