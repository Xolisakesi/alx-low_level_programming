#include "main.h"
/**
 * cap_string - function that capitalizes
 * all words of a string.
 * @s: input string
 * Return: pointer to string
 */
char *cap_string(char *s)
{
static int i, insideWord;

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z') ||
	(s[i] >= 'A' && s[i] <= 'Z'))
{
if (!insideWord)
{
insideWord = 1;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
else
{
if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] += 32;
}
}
}
else
{
insideWord = 0;
}
}
return (s);
}
