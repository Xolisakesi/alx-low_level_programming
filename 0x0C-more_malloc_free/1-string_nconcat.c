#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates
 * two strings.
 * @s1: first string
 * @s2: second string
 * @n: lenght in bytes of s2 to add to s1
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, total_len, len1, len2;
len1 = len2 = total_len = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0' && len2 < n)
len2++;
total_len = len1 + len2;
result = (char *)malloc(total_len + 1);
if (!result)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (i = 0; i < len2; i++)
result[len1 + i] = s2[i];
result[total_len] = '\0';
return (result);
}

