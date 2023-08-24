#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @s: pointer to string
 * Return: returns a pointer to uppercase string s
 */
char *string_toupper(char *s)
{
static int i;

for (; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
}
return (s);
}
