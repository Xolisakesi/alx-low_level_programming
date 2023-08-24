#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: returns an interger
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 < *s2)
{
return (-(*s2 - *s1));
}
else if (*s1 > *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
